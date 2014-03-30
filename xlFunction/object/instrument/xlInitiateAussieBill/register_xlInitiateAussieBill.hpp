/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 25/01/11
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateAussieBill (const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateAussieBill
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x14""xlInitiateAussieBill"),
            TempStrNoSize("\x07""PCEEPP#"),
            TempStrNoSize("\x14""INSTANCE.AUSSIE.BILL"),
            TempStrNoSize("\x57""identifiant de l'instrument,date d'emission,date de maturit�,jours de r�glement,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3E""Cette fonction instancie un bill �mis par le tr�sor australien"),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date d'�mission du titre"),
            TempStrNoSize("\x1C""La date de maturit� du titre"),
            TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlInitiateAussieBill (const XLOPER & xDll) {

        XLOPER xlRegID ;

             // d�charge la fonction xlInitiateAussieBill
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x14""xlInitiateAussieBill"),
            TempStrNoSize("\x07""PCEEPP#"),
            TempStrNoSize("\x14""INSTANCE.AUSSIE.BILL"),
            TempStrNoSize("\x57""identifiant de l'instrument,date d'emission,date de maturit�,jours de r�glement,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3E""Cette fonction instancie un bill �mis par le tr�sor australien"),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date d'�mission du titre"),
            TempStrNoSize("\x1C""La date de maturit� du titre"),
            TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x14""xlInitiateAussieBill")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }