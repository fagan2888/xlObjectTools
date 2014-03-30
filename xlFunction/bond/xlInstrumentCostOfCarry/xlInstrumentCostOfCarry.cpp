/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 12/08/10
 *  Copyright 2009. All /rights r/eserved.
 *
 */

#include "xlInstrumentCostOfCarry.hpp"

        /* fonction de calcul de la valeur capitalis�es au taux de funding */
DLLEXPORT xloper * xlInstrumentCostOfCarry (const char * objectID_,
                                            const char * repoCurveId_,
                                            const double * instrumentPrice_,
                                            const double * carryStartDate_,
                                            const double * carryEndDate_,
                                            xloper * trigger_) {
    

        boost::shared_ptr<ObjectHandler::FunctionCall> functionCall(
            new ObjectHandler::FunctionCall("xlInstrumentCostOfCarry")) ;

        try {


            QL_ENSURE(! functionCall->calledByFunctionWizard(), "") ;

                // trigger pour provoquer le recalcul
            ObjectHandler::validateRange(trigger_, "trigger");

                // on r�cup�re le bond
            OH_GET_REFERENCE(instrumentPtr,
                             objectID_,
                             QuantLibAddin::Bond,
                             QuantLib::Bond)

                // on r�cup�re la courbe des taux
            OH_GET_OBJECT(curvePtr, repoCurveId_, ObjectHandler::Object)

            QuantLib::Date carryStartDate(static_cast<QuantLib::BigInteger>(* carryStartDate_)),
                           carryEndDate(static_cast<QuantLib::BigInteger>(* carryEndDate_)) ;

            QuantLib::Handle<QuantLib::YieldTermStructure> YieldCurveLibObj =
                QuantLibAddin::CoerceHandle<QuantLibAddin::YieldTermStructure, QuantLib::YieldTermStructure>()(curvePtr) ;

                /* contr�le sur les dates */
            QL_REQUIRE(carryStartDate <= carryEndDate, "end date is situated before start date") ;
            QL_REQUIRE(YieldCurveLibObj->referenceDate() <= carryStartDate, "wrong curve reference date") ;

                // le montant de retour
            double returnValue = 0.0 ;

                /* contr�le sur l'instrument */
            QL_REQUIRE(instrumentPtr->maturityDate() >= carryEndDate, "instrument matures before end date !") ;
            QL_REQUIRE(instrumentPtr->issueDate() <= carryStartDate, "instrument issues after begin date !") ;

                /* on ajoute le montant � l'engagement capitalis�
                   � la date de fin de la p�riode de carry et 
                   on retranche l'accrued final pour obtenir le clean price */
            returnValue += * instrumentPrice_ + instrumentPtr->accruedAmount(carryStartDate) ;

            returnValue *= (YieldCurveLibObj->discount(carryStartDate, true) 
                / YieldCurveLibObj->discount(carryEndDate, true) - 1) ;

                /* on parcourt les CF de l'instruments */
            for (std::vector<boost::shared_ptr<QuantLib::CashFlow> >::const_iterator
                 It = instrumentPtr->cashflows().begin() ;
                 It != instrumentPtr->cashflows().end() ; ++It) {

                        /* contr�les sur les dates de tomb�e/r�glement */
                    if(It->get()->date() >= carryStartDate && It->get()->date() <= carryEndDate)

                                /* montant CF_i * discount_j / discount_i */
                            returnValue += It->get()->amount() * (YieldCurveLibObj->discount(It->get()->date(), true)
                                           / YieldCurveLibObj->discount(carryEndDate, true) - 1) ;

                        }


            static OPER returnOper ;
            ObjectHandler::scalarToOper(returnValue, returnOper) ;
            return & returnOper ;

        } catch (std::exception & e) {

                ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall) ;
                static XLOPER returnOper ;
                ObjectHandler::scalarToOper(e.what(), returnOper) ;

                return & returnOper ;

            }

    } ;

