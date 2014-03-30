/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlfunction/math/statistics/xlKalmanFilter/xlKalmanFilter.hpp>


        /* fonction de calcul de la matrice de variance-covariance d'un historique de taux */
DLLEXPORT xloper * xlKalmanFilter(const xloper * seriesId_,
                                  const xloper * trigger_) {

boost::shared_ptr<ObjectHandler::FunctionCall> functionCall(
    new ObjectHandler::FunctionCall("xlKalmanFilter")) ;

     try {

        QL_ENSURE(! functionCall->calledByFunctionWizard(), "") ;

            /* d�claration du trigger */
        ObjectHandler::validateRange(trigger_, "trigger") ;

            /* conversion des xloper */
        std::vector<std::string> seriesId = ObjectHandler::operToVector<std::string>(* seriesId_, "seriesId") ;

            /* contr�le sur les dimensions */
        QL_ENSURE(seriesId.size() != 2, "unconsistent data set") ;

            /* on r�cup�re les s�ries variationnelles */
        std::vector<QuantLib::TimeSeries<double> > timeSeriesVector ;

        for (std::vector<std::string>::const_iterator It = seriesId.begin() ; It != seriesId.end() ; ++It) {


                OH_GET_REFERENCE(TimeSeriesPtr, 
								 * It, 
								 QuantLibAddin::TimeSeriesObject<double>,
								 QuantLib::TimeSeries<double>)    
 
                timeSeriesVector.push_back(* TimeSeriesPtr) ;


            }

			/* cr�ation de la matrice de retour */
		boost::numeric::ublas::matrix<double> returnMatrix(1, 1, 0.0) ;

        static OPER returnOper ;

        ObjectHandler::ublasMatrixToOper<double>(returnMatrix, returnOper) ;

		return & returnOper ;

        } catch (std::exception & e) {

                ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall) ;
 
				return 0 ;

        }

}