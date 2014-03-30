/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/10/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlIsActiveInstrument(const XLOPER & xDll) {

             // Enregistre la fonction xlIsActiveInstrument
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x14""xlIsActiveInstrument"),
            TempStrNoSize("\x06""PCPPP#"),
            TempStrNoSize("\x14""INSTRUMENT.EST.ACTIF"),
            TempStrNoSize("\x3F""Identifiant de l'instrument,Date de test,r�gle � tester,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x41""Cette fonction indique si l'instrument est actif � la date test�e"),
            TempStrNoSize("\x18""L'instrument � valoriser"),
            TempStrNoSize("\x20""La Date de test (champ optionel)"),
			TempStrNoSize("\x22""La r�gle � tester (champ optionel)"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlIsActiveInstrument(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // d�r�f�rence la fonction xlIsActiveInstrument
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x14""xlIsActiveInstrument"),
            TempStrNoSize("\x06""PCPPP#"),
            TempStrNoSize("\x14""INSTRUMENT.EST.ACTIF"),
            TempStrNoSize("\x3F""Identifiant de l'instrument,Date de test,r�gle � tester,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x41""Cette fonction indique si l'instrument est actif � la date test�e"),
            TempStrNoSize("\x18""L'instrument � valoriser"),
            TempStrNoSize("\x20""La Date de test (champ optionel)"),
			TempStrNoSize("\x22""La r�gle � tester (champ optionel)"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x14""xlIsActiveInstrument")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }