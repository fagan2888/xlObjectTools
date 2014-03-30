/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInstrumentCarry(const XLOPER & xDll) {

             // Enregistre la fonction xlInstrumentCarry
        Excel(xlfRegister, 0, 16, & xDll,
            TempStrNoSize("\x11""xlInstrumentCarry"),
            TempStrNoSize("\x08""PCEEECP#"),
            TempStrNoSize("\x10""INSTRUMENT.CARRY"),
            TempStrNoSize("\x62""Identifiant de l'instrument,date de d�but,date de fin,yield initial,convention de taux,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x67""Cette fonction calcule le portage d�gag� par l'instrument pour un prix et une p�riode de portage donn�e"),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date de d�but de portage"),
            TempStrNoSize("\x19""La date de fin de portage"),
            TempStrNoSize("\x17""Le taux de l'instrument"),
            TempStrNoSize("\x27""L'identifiant de la convention employ�e"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlInstrumentCarry(const XLOPER & xDll) {

        XLOPER xlRegID ;

        Excel(xlfRegister, 0, 16, & xDll,
            TempStrNoSize("\x11""xlInstrumentCarry"),
            TempStrNoSize("\x08""PCEEECP#"),
            TempStrNoSize("\x10""INSTRUMENT.CARRY"),
            TempStrNoSize("\x62""Identifiant de l'instrument,date de d�but,date de fin,yield initial,convention de taux,d�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Bond"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x67""Cette fonction calcule le portage d�gag� par l'instrument pour un prix et une p�riode de portage donn�e"),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date de d�but de portage"),
            TempStrNoSize("\x19""La date de fin de portage"),
            TempStrNoSize("\x17""Le taux de l'instrument"),
            TempStrNoSize("\x27""L'identifiant de la convention employ�e"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x11""xlInstrumentCarry")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }