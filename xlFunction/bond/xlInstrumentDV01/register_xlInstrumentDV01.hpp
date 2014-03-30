/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInstrumentDV01(const XLOPER & xDll) {

             // Enregistre la fonction xlInstrumentDuration
        Excel(xlfRegister, 0, 16, & xDll,
            TempStrNoSize("\x10""xlInstrumentDV01"),
            TempStrNoSize("\x08""PCPPECP#"),
            TempStrNoSize("\x0F""INSTRUMENT.DV01"),
            TempStrNoSize("\x5B""Identifiant de l'instrument,date d'�valuation,date de r�glement,prix,convention,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x4E""Cette fonction calcule la dv01 de l'instrument pour un prix et une date donn�e"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x17""Le prix de l'instrument"),
            TempStrNoSize("\x23""La date d'�valuation de la duration"),
            TempStrNoSize("\x1D""La date de r�glement du titre"),
            TempStrNoSize("\x20""La convention de taux � utiliser"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlInstrumentDV01(const XLOPER & xDll) {

        XLOPER xlRegID ;

        Excel(xlfRegister, 0, 16, & xDll,
            TempStrNoSize("\x10""xlInstrumentDV01"),
            TempStrNoSize("\x08""PCPPECP#"),
            TempStrNoSize("\x0F""INSTRUMENT.DV01"),
            TempStrNoSize("\x5B""Identifiant de l'instrument,date d'�valuation,date de r�glement,prix,convention,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x4E""Cette fonction calcule la dv01 de l'instrument pour un prix et une date donn�e"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x17""Le prix de l'instrument"),
            TempStrNoSize("\x23""La date d'�valuation de la duration"),
            TempStrNoSize("\x1D""La date de r�glement du titre"),
            TempStrNoSize("\x20""La convention de taux � utiliser"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x10""xlInstrumentDV01")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }