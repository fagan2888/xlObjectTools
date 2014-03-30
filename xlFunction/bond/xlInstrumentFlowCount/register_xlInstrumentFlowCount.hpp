/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 20/06/10
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInstrumentFlowCount(const XLOPER & xDll) {

             // Enregistre la fonction xlInstrumentFlowCount
        Excel(xlfRegister, 0, 13, & xDll,
            TempStrNoSize("\x15""xlInstrumentFlowCount"),
            TempStrNoSize("\x05""PCEP#"),
            TempStrNoSize("\x17""INSTRUMENT.FLUX.RESTANT"),
            TempStrNoSize("\x39""Identifiant de l'instrument,date de r�glement,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x54""Cette fonction d�termine le nombre de paiements restants apr�s une date de r�glement"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x1D""La date de r�glement � tester"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlInstrumentFlowCount(const XLOPER & xDll) {

        XLOPER xlRegID ;

        Excel(xlfRegister, 0, 13, & xDll,
            TempStrNoSize("\x15""xlInstrumentFlowCount"),
            TempStrNoSize("\x05""PCEP#"),
            TempStrNoSize("\x17""INSTRUMENT.FLUX.RESTANT"),
            TempStrNoSize("\x39""Identifiant de l'instrument,date de r�glement,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x54""Cette fonction d�termine le nombre de paiements restants apr�s une date de r�glement"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x1D""La date de r�glement � tester"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x15""xlInstrumentFlowCount")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }