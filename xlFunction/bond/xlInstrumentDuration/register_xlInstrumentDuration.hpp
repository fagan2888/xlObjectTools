/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInstrumentDuration(const XLOPER & xDll) {

             // Enregistre la fonction xlInstrumentDuration
        Excel(xlfRegister, 0, 17, & xDll,
            TempStrNoSize("\x14""xlInstrumentDuration"),
            TempStrNoSize("\x09""PCPPEPCP#"),
            TempStrNoSize("\x13""INSTRUMENT.DURATION"),
            TempStrNoSize("\x6C""Identifiant de l'instrument,date d'�valuation,date de r�glement,prix,type de duration,convention,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x52""Cette fonction calcule la duration de l'instrument pour un prix et une date donn�e"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x17""Le prix de l'instrument"),
            TempStrNoSize("\x23""La date d'�valuation de la duration"),
            TempStrNoSize("\x1D""La date de r�glement du titre"),
            TempStrNoSize("\x1E""Le type de duration � calculer"),
            TempStrNoSize("\x20""La convention de taux � utiliser"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlInstrumentDuration(const XLOPER & xDll) {

        XLOPER xlRegID ;

        Excel(xlfRegister, 0, 17, & xDll,
            TempStrNoSize("\x14""xlInstrumentDuration"),
            TempStrNoSize("\x09""PCPPEPCP#"),
            TempStrNoSize("\x13""INSTRUMENT.DURATION"),
            TempStrNoSize("\x6C""Identifiant de l'instrument,date d'�valuation,date de r�glement,prix,type de duration,convention,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x52""Cette fonction calcule la duration de l'instrument pour un prix et une date donn�e"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x17""Le prix de l'instrument"),
            TempStrNoSize("\x23""La date d'�valuation de la duration"),
            TempStrNoSize("\x1D""La date de r�glement du titre"),
            TempStrNoSize("\x1E""Le type de duration � calculer"),
            TempStrNoSize("\x20""La convention de taux � utiliser"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x14""xlInstrumentDuration")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }