/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlFunction/object/math/xlInitiateTimeSeries/xlInitiateTimeSeries.hpp>

        /* enregistre une matrice r�elle */
DLLEXPORT char * xlInitiateTimeSeries (const char * objectID_,
                                       const xloper * date_,
                                       const xloper * data_,
                                       xloper * trigger_) {

            boost::shared_ptr<ObjectHandler::FunctionCall> functionCall(
                new ObjectHandler::FunctionCall("xlInitiateTimeSeries")) ;

             try {


                QL_ENSURE(! functionCall->calledByFunctionWizard(), "") ;

                    // trigger pour provoquer le recalcul
                ObjectHandler::validateRange(trigger_, "trigger") ;

                    /* conversion des xloper */
                std::vector<double> tempDate = ObjectHandler::operToVector<double>(
                    * date_, "tempdates") ;

                std::vector<double> tempData = ObjectHandler::operToVector<double>(
                    * data_, "tempdata") ;

				QL_REQUIRE(tempDate.size() == tempData.size(), "unapropriate data set") ;

                    /* dans la cas ou la s�rie de donn�e n'est pas tri�e, l'objet de type
                       map est incapable d'effectuer le tri. Il faut donc r�aliser cette
                       �tape au moment de la cr�ation des donn�es. Il faut de plus supprimer
					   les donn�es vides (tempDate = 0) */

                std::vector<QuantLib::Date> date ;

				std::vector<double> data ;

                for (unsigned long i = 0 ; i < tempDate.size() ; i++) {

						if (tempDate[i] != 0.0) {
                        
								date.push_back(QuantLib::Date(static_cast<QuantLib::BigInteger>(tempDate[i]))) ;

								data.push_back(tempData[i]) ;

							}

                    }

                    /* cr�ation d'une premi�re s�rie */
                QuantLib::TimeSeries<double> myTempSeries(date.begin(), 
                                                          date.end(), 
                                                          data.begin()) ;

                    // tri des vecteurs
                std::sort(date.begin(), date.end()) ;

                data.clear() ;


                for (std::vector<QuantLib::Date>::iterator It = date.begin() ; It != date.end() ; ++It) {
                    

                        data.push_back(myTempSeries[* It]) ;
                    

                    }


                QuantLib::TimeSeries<QuantLib::Real> finalSeries(date.begin(), 
                                                                 date.end(), 
                                                                 data.begin()) ;

                

                    // Construction du value object
                boost::shared_ptr<QuantLibAddin::ValueObjects::TimeSeriesValueObject> myTimeSeriesValueObject(
                new QuantLibAddin::ValueObjects::TimeSeriesValueObject(objectID_,
                                                                       "double",
                                                                       true)) ;

                    // instanciation de la serie
                boost::shared_ptr<QuantLibAddin::TimeSeriesObject<QuantLib::Real>> myTimeSeriesObject(
                    new QuantLibAddin::TimeSeriesObject<QuantLib::Real>(myTimeSeriesValueObject,
                                                                        finalSeries,
                                                                        true)) ;

					// stockage de l'objet
                std::string returnValue =
                    ObjectHandler::RepositoryXL::instance().storeObject(objectID_, 
                                                                        myTimeSeriesObject, 
                                                                        true) ; // on force la r��criture

                static char ret[XL_MAX_STR_LEN] ;

                ObjectHandler::stringToChar(returnValue, ret) ;

                return ret ;


            } catch (std::exception & e) {


                    static char ret[XL_MAX_STR_LEN] ;

                    ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall) ;

                    ObjectHandler::stringToChar(e.what(), ret) ;

                    return ret ;


            }


    } ;
