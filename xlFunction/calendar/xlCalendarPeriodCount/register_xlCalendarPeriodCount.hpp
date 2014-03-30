/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 20/12/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlCalendarPeriodCount(const XLOPER & xDll) {

            // Enregistre la fonction xlCalendarPeriodCount
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x15""xlCalendarPeriodCount"),
            TempStrNoSize("\x07""BPCPPP#"),
            TempStrNoSize("\x16""CALENDRIER.GAP.FINANCE"),
            TempStrNoSize("\x36""Date de d�part,P�riode,Calendrier,Convention,R�gle EOM"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x19""xlObjectTools - Calendar"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x7B""Cette fonction calcule la date relative � une date de d�part, d'une p�riode, d'un calendrier et d'une convention de calcul."),
            TempStrNoSize("\x11""La date de d�part"),
            TempStrNoSize("\x2E""L'identifiant de la p�riode (O/N, 1W, 3M, etc)"),
            TempStrNoSize("\x0D""Le calendrier"),
            TempStrNoSize("\x1F""La convention de fin de p�riode"),
            TempStrNoSize("\x27""La r�gle d'ajustement de fin de mois   ")) ;

    }

inline void unregisterxlCalendarPeriodCount(const XLOPER & xDll) {

        XLOPER xlRegID ;

            // lib�re la fonction xlCalendarPeriodCount
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x15""xlCalendarPeriodCount"),
            TempStrNoSize("\x07""BPCPPP#"),
            TempStrNoSize("\x16""CALENDRIER.GAP.FINANCE"),
            TempStrNoSize("\x36""Date de d�part,P�riode,Calendrier,Convention,R�gle EOM"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x19""xlObjectTools - Calendar"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x7B""Cette fonction calcule la date relative � une date de d�part, d'une p�riode, d'un calendrier et d'une convention de calcul."),
            TempStrNoSize("\x11""La date de d�part"),
            TempStrNoSize("\x2E""L'identifiant de la p�riode (O/N, 1W, 3M, etc)"),
            TempStrNoSize("\x0D""Le calendrier"),
            TempStrNoSize("\x1F""La convention de fin de p�riode"),
            TempStrNoSize("\x27""La r�gle d'ajustement de fin de mois   ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x15""xlCalendarPeriodCount")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }