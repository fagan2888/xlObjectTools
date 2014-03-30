/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 12/12/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlPriceFromZSpread(const XLOPER & xDll) {

             // Enregistre la fonction xlPriceFromZSpread
        Excel(xlfRegister, 0, 16, & xDll,
              TempStrNoSize("\x12""xlPriceFromZSpread"),
              TempStrNoSize("\x08""PCCPPPP#"),
              TempStrNoSize("\x17""INSTRUMENT.PRIX.ZSPREAD"),
              TempStrNoSize("\x66""Identifiant de l'instrument,Identifiant de la courbe,Z-spread,Convention,Date de r�glement,D�clencheur"),
              TempStrNoSize("\x01""1"),
              TempStrNoSize("\x15""xlObjectTools - Bond"),
              TempStrNoSize("\x00"""),
              TempStrNoSize("\x00"""),
              TempStrNoSize("\x50""Cette fonction calcule le prix th�orique de l'instrument� partir de son z-spread"),
              TempStrNoSize("\x16""Le nom de l'instrument"),
              TempStrNoSize("\x16""La courbe de r�f�rence"),
              TempStrNoSize("\x28""Le spread de l'instrument exprim� en bps"),
              TempStrNoSize("\x30""L'identifiant de la convention de calcul du taux"),
              TempStrNoSize("\x24""La date de r�glement de l'instrument"),
              TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlPriceFromZSpread(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // lib�re la fonction xlPriceFromZSpread
        Excel(xlfRegister, 0, 16, & xDll,
              TempStrNoSize("\x12""xlPriceFromZSpread"),
              TempStrNoSize("\x08""PCCPPPP#"),
              TempStrNoSize("\x17""INSTRUMENT.PRIX.ZSPREAD"),
              TempStrNoSize("\x66""Identifiant de l'instrument,Identifiant de la courbe,Z-spread,Convention,Date de r�glement,D�clencheur"),
              TempStrNoSize("\x01""1"),
              TempStrNoSize("\x15""xlObjectTools - Bond"),
              TempStrNoSize("\x00"""),
              TempStrNoSize("\x00"""),
              TempStrNoSize("\x50""Cette fonction calcule le prix th�orique de l'instrument� partir de son z-spread"),
              TempStrNoSize("\x16""Le nom de l'instrument"),
              TempStrNoSize("\x16""La courbe de r�f�rence"),
              TempStrNoSize("\x28""Le spread de l'instrument exprim� en bps"),
              TempStrNoSize("\x30""L'identifiant de la convention de calcul du taux"),
              TempStrNoSize("\x24""La date de r�glement de l'instrument"),
              TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;


        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x12""xlPriceFromZSpread")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }