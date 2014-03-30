/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 22/11/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInstrumentYield(const XLOPER & xDll) {

             // Enregistre la fonction xlInstrumentYieldNew
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x11""xlInstrumentYield"),
            TempStrNoSize("\x07""PCEPCP#"),
            TempStrNoSize("\x0F""INSTRUMENT.TAUX"),
            TempStrNoSize("\x49""Identifiant de l'instrument,prix,date de r�glement,convention,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x56""Cette fonction calcule le taux de l'instument selectionn� selon la convention d�sign�e"),
            TempStrNoSize("\x18""L'instrument � valoriser"),
            TempStrNoSize("\x17""Le prix de l'instrument"),
            TempStrNoSize("\x14""La date de r�glement"),
            TempStrNoSize("\x28""L'identifiant de la convention de calcul"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlInstrumentYield(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Lib�re la fonction xlInstrumentTheoreticalYield
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x11""xlInstrumentYield"),
            TempStrNoSize("\x07""PCEPCP#"),
            TempStrNoSize("\x13""INSTRUMENT.TAUX.NEW"),
            TempStrNoSize("\x49""Identifiant de l'instrument,prix,date de r�glement,convention,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x56""Cette fonction calcule le taux de l'instument selectionn� selon la convention d�sign�e"),
            TempStrNoSize("\x18""L'instrument � valoriser"),
            TempStrNoSize("\x17""Le prix de l'instrument"),
            TempStrNoSize("\x14""La date de r�glement"),
            TempStrNoSize("\x28""L'identifiant de la convention de calcul"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x11""xlInstrumentYield")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }