/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlCovarianceMatrixEWMA(const XLOPER & xDll) {

             // Enregistre la fonction xlCovarianceMatrixEWMA
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x16""xlCovarianceMatrixEWMA"),
            TempStrNoSize("\x07""PPEELP#"),
            TempStrNoSize("\x17""MATRICE.COVARIANCE.EWMA"),
            TempStrNoSize("\x56""plage des s�ries,facteur d'obsolescence, date d'�valuation,indicateur de norme,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x9D""Cette fonction calcule la matrice des variances-covariances d'un ensemble de s�ries pour une valeur du facteur d'obsolescence et une date d'�valuation donn�e"),
            TempStrNoSize("\x2E""La plage des identifiants des s�ries � estimer"),
            TempStrNoSize("\x25""La valeur du param�tre d'obsolescence"),
            TempStrNoSize("\x29""Indique si la volatilit� doit �tre norm�e"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlCovarianceMatrixEWMA(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlCovarianceMatrixEWMA
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x16""xlCovarianceMatrixEWMA"),
            TempStrNoSize("\x07""PPEELP#"),
            TempStrNoSize("\x17""MATRICE.COVARIANCE.EWMA"),
            TempStrNoSize("\x56""plage des s�ries,facteur d'obsolescence, date d'�valuation,indicateur de norme,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x9D""Cette fonction calcule la matrice des variances-covariances d'un ensemble de s�ries pour une valeur du facteur d'obsolescence et une date d'�valuation donn�e"),
            TempStrNoSize("\x2E""La plage des identifiants des s�ries � estimer"),
            TempStrNoSize("\x25""La valeur du param�tre d'obsolescence"),
            TempStrNoSize("\x29""Indique si la volatilit� doit �tre norm�e"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x16""xlCovarianceMatrixEWMA")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }