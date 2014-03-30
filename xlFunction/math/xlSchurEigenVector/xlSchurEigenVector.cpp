/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlFunction/math/xlSchurEigenVector/xlSchurEigenVector.hpp>

        /* fonction de calcul de la forme de Schur d'une matrice */
DLLEXPORT xloper * xlSchurEigenVector(const char * objectID_,
                                      const xloper * trigger_) {
    
    boost::shared_ptr<ObjectHandler::FunctionCall> functionCall(
    new ObjectHandler::FunctionCall("xlSchurEigenVector")) ;

     try {

        QL_ENSURE(! functionCall->calledByFunctionWizard(), "") ;

            // initialisation de la session
        ObjectHandler::validateRange(trigger_, "trigger") ;

            // on r�cup�re la matrice
        OH_GET_REFERENCE(matrixObjectPtr, 
						 objectID_, 
						 QuantLibAddin::ublasMatrixObject,
						 boost::numeric::ublas::matrix<double>)

        QuantLib::SymmetricSchurDecomposition schur(
            QuantLibExtended::ublasMatrixToMatrix(* matrixObjectPtr)) ;

            // valeurs de retour
        static OPER returnOper ;

        ObjectHandler::ublasMatrixToOper<double>(
            QuantLibExtended::matrixToUblasMatrix(schur.eigenvectors()), returnOper) ;

        return & returnOper ;

    } catch (std::exception & e) {


            ObjectHandler::RepositoryXL::instance().logError(e.what(), functionCall) ;

            static OPER returnOper ;
        
			returnOper.xltype = xltypeErr ;

			returnOper.val.err = xlerrNA ;

			return & returnOper ;


    }

} ;
