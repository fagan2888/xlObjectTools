/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 25/01/11
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateAussieNote (const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateAussieNote
        Excel(xlfRegister, 0, 18, & xDll,
            TempStrNoSize("\x14""xlInitiateAussieNote"),
            TempStrNoSize("\x0A""PCEPPPEEP#"),
            TempStrNoSize("\x14""INSTANCE.AUSSIE.NOTE"),
            TempStrNoSize("\x83""identifiant de l'instrument,date d'emission,date effective,premier coupon,penulti�me coupon,date de maturit�,taux de coupon,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3C""Cette fonction instancie une obligation du tr�sor australien"),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date d'�mission du titre"),
            TempStrNoSize("\x2B""La date de d�but de cumul de premier coupon"),
            TempStrNoSize("\x25""La date de paiement du premier coupon"),
            TempStrNoSize("\x1C""La date du penulti�me coupon"),
            TempStrNoSize("\x1C""La date de maturit� du titre"),
            TempStrNoSize("\x21""Le taux de coupon de l'obligation"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlInitiateAussieNote (const XLOPER & xDll) {

        XLOPER xlRegID ;

             // d�charge la fonction xlInitiateAussieNote
        Excel(xlfRegister, 0, 18, & xDll,
            TempStrNoSize("\x14""xlInitiateAussieNote"),
            TempStrNoSize("\x0A""PCEPPPEEP#"),
            TempStrNoSize("\x14""INSTANCE.AUSSIE.NOTE"),
            TempStrNoSize("\x83""identifiant de l'instrument,date d'emission,date effective,premier coupon,penulti�me coupon,date de maturit�,taux de coupon,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3C""Cette fonction instancie une obligation du tr�sor australien"),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date d'�mission du titre"),
            TempStrNoSize("\x2B""La date de d�but de cumul de premier coupon"),
            TempStrNoSize("\x25""La date de paiement du premier coupon"),
            TempStrNoSize("\x1C""La date du penulti�me coupon"),
            TempStrNoSize("\x1C""La date de maturit� du titre"),
            TempStrNoSize("\x21""Le taux de coupon de l'obligation"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x14""xlInitiateAussieNote")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }