/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlZScoreEWMA(const XLOPER & xDll) {

             // Enregistre la fonction xlZScoreEWMA
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x0C""xlZScoreEWMA"),
            TempStrNoSize("\x06""PCEEP#"),
            TempStrNoSize("\x0C""Z.SCORE.EWMA"),
            TempStrNoSize("\x40""s�rie � estimer,facteur d'obsolescence,date d'�valuation,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x5E""Cette fonction calcule le z-score d'une s�rie pour une valeur du facteur d'obsolescence donn�e"),
            TempStrNoSize("\x21""Identifiant de la s�rie � estimer"),
            TempStrNoSize("\x25""La valeur du param�tre d'obsolescence"),
            TempStrNoSize("\x1F""La date d'�valuation du z-score"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlZScoreEWMA(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlZScoreEWMA
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x0C""xlZScoreEWMA"),
            TempStrNoSize("\x06""PCEEP#"),
            TempStrNoSize("\x0C""Z.SCORE.EWMA"),
            TempStrNoSize("\x40""s�rie � estimer,facteur d'obsolescence,date d'�valuation,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x5E""Cette fonction calcule le z-score d'une s�rie pour une valeur du facteur d'obsolescence donn�e"),
            TempStrNoSize("\x21""Identifiant de la s�rie � estimer"),
            TempStrNoSize("\x25""La valeur du param�tre d'obsolescence"),
            TempStrNoSize("\x1F""La date d'�valuation du z-score"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;


        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x0C""xlZScoreEWMA")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }