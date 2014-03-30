/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlFunction/bond/xlInstrumentPrice/xlInstrumentPrice.hpp>

            /* Fonction de conversion yield -> prix pour la convention de l'instrument */
DLLEXPORT xloper * xlInstrumentPrice (const char * instrumentId_,
                                      xloper * settlementDate_,
                                      const double * yield_,
                                      xloper * conventionId_, 
                                      xloper * trigger_) {

    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall(
        new ObjectHandler::FunctionCall("xlInstrumentPrice")) ;

         try {

            QL_ENSURE(! functionCall->calledByFunctionWizard(), "") ;

            double returnValue ;

                // trigger pour provoquer le recalcul
            ObjectHandler::validateRange(trigger_, "trigger") ;

            ObjectHandler::validateRange(settlementDate_, "settlement Date") ;

            ObjectHandler::validateRange(conventionId_, "convention Id") ;


                // on r�cup�re l'instrument
            OH_GET_UNDERLYING(myBond, 
                              instrumentId_, 
                              QuantLibAddin::Bond,
                              QuantLib::Bond)

                // on r�cup�re les xloper
            ObjectHandler::ConvertOper myOper1(* settlementDate_), 
                                       myOper2(* conventionId_) ;

            QuantLib::Date settlementDate(
                myOper1.missing() ? 
                myBond.settlementDate() : 
                QuantLib::Date(static_cast<QuantLib::BigInteger>(myOper1))) ;

            if (myOper2.missing()) { // TODO : defaulter sur la bonne convention...


                    returnValue = myBond.cleanPrice(* yield_,
                                                    QuantLib::Actual365Fixed(),
                                                    QuantLib::Continuous,
                                                    QuantLib::Annual,
                                                    QuantLib::Unadjusted,
                                                    settlementDate) ;


                }

            else {
                

                    OH_GET_REFERENCE(conventionPtr, 
                                     static_cast<std::string>(myOper2),
                                     QuantLibAddin::interestRateConventionObject, 
                                     QuantLib::interestRateConvention)
                   
                    returnValue = myBond.cleanPrice(* yield_,
                                                    conventionPtr->daycounter(),
                                                    conventionPtr->compounding(),
                                                    conventionPtr->frequency(),
                                                    conventionPtr->businessDayConvention(),
                                                    settlementDate) ;


                }


            static XLOPER returnOper ;

            ObjectHandler::scalarToOper(returnValue, returnOper) ;

            return & returnOper ;


        } catch (std::exception & e) {


                    ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall) ;

                    static XLOPER returnOper ;

                    returnOper.xltype = xltypeErr ;

                    returnOper.val.err = xlerrValue ;

                    return & returnOper ;


            }

    } ;