/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 19/12/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateDeposit(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateDeposit
        Excel(xlfRegister, 0, 18, & xDll,
            TempStrNoSize("\x11""xlInitiateDeposit"),
            TempStrNoSize("\x0A""PCPEPPPPP#"),
            TempStrNoSize("\x0D""INSTANCE.DEPO"),
            TempStrNoSize("\x8C""identifiant du d�p�t,date de valeur,date de maturit�,calendrier,jours de r�glement,convention jours ouvr�s,convention de fin de mois,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x21""Cette fonction instancie un d�p�t"),
            TempStrNoSize("\x16""L'identifiant du d�p�t"),
            TempStrNoSize("\x21""La date de valeur de l'instrument"),
            TempStrNoSize("\x1C""La date de maturit� du d�p�t"),
            TempStrNoSize("\x1D""Le calendrier de l'instrument"),
            TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
            TempStrNoSize("\x1E""La convention des jours ouvr�s"),
            TempStrNoSize("\x1C""La convention defins de mois"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlInitiateDeposit(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlInitiateDeposit
        Excel(xlfRegister, 0, 18, & xDll,
            TempStrNoSize("\x11""xlInitiateDeposit"),
            TempStrNoSize("\x0A""PCPEPPPPP#"),
            TempStrNoSize("\x0D""INSTANCE.DEPO"),
            TempStrNoSize("\x8C""identifiant du d�p�t,date de valeur,date de maturit�,calendrier,jours de r�glement,convention jours ouvr�s,convention de fin de mois,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x21""Cette fonction instancie un d�p�t"),
            TempStrNoSize("\x16""L'identifiant du d�p�t"),
            TempStrNoSize("\x21""La date de valeur de l'instrument"),
            TempStrNoSize("\x1C""La date de maturit� du d�p�t"),
            TempStrNoSize("\x1D""Le calendrier de l'instrument"),
            TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
            TempStrNoSize("\x1E""La convention des jours ouvr�s"),
            TempStrNoSize("\x1C""La convention defins de mois"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x14""xlInitiateDeposit")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }