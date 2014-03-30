/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlPricingDate(const XLOPER & xDll) {

             // Enregistre la fonction xlPricingDate
        Excel(xlfRegister, 0, 12, & xDll,
            TempStrNoSize("\x0D""xlPricingDate"),
            TempStrNoSize("\x04""BPP#"),
            TempStrNoSize("\x12""ADDIN.DATE.PRICING"),
            TempStrNoSize("\x0C""date,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x16""xlObjectTools - addin"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x35""Cette fonction renseigne la date de calcul du syst�me"),
            TempStrNoSize("\x11""La date de calcul"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlPricingDate(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // lib�re la fonction xlPricingDate
        Excel(xlfRegister, 0, 12, & xDll,
            TempStrNoSize("\x0D""xlPricingDate"),
            TempStrNoSize("\x04""BPP#"),
            TempStrNoSize("\x12""ADDIN.DATE.PRICING"),
            TempStrNoSize("\x0C""date,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x16""xlObjectTools - addin"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x35""Cette fonction renseigne la date de calcul du syst�me"),
            TempStrNoSize("\x11""La date de calcul"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x0D""xlPricingDate")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }