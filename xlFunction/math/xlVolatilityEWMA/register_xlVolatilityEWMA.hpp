/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlVolatilityEWMA(const XLOPER & xDll) {

             // Enregistre la fonction xlVolatilityEWMA
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x10""xlVolatilityEWMA"),
            TempStrNoSize("\x06""PCEEP#"),
            TempStrNoSize("\x0F""VOLATILITE.EWMA"),
            TempStrNoSize("\x40""s�rie � estimer,facteur d'obsolescence,date d'�valuation,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x68""Cette fonction calcule la volatilit� simple d'une s�rie pour une valeur du facteur d'obsolescence donn�e"),
            TempStrNoSize("\x21""Identifiant de la s�rie � estimer"),
            TempStrNoSize("\x25""La valeur du param�tre d'obsolescence"),
            TempStrNoSize("\x25""La date d'�valuation de la volatilit�"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlVolatilityEWMA(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlVolatilityEWMA
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x10""xlVolatilityEWMA"),
            TempStrNoSize("\x06""PCEEP#"),
            TempStrNoSize("\x0F""VOLATILITE.EWMA"),
            TempStrNoSize("\x40""s�rie � estimer,facteur d'obsolescence,date d'�valuation,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x68""Cette fonction calcule la volatilit� simple d'une s�rie pour une valeur du facteur d'obsolescence donn�e"),
            TempStrNoSize("\x21""Identifiant de la s�rie � estimer"),
            TempStrNoSize("\x25""La valeur du param�tre d'obsolescence"),
            TempStrNoSize("\x25""La date d'�valuation de la volatilit�"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;


        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x10""xlVolatilityEWMA")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }