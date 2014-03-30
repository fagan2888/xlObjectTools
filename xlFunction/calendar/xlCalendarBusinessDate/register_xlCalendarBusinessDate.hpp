/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlCalendarBusinessDate(const XLOPER & xDll) {

            // Enregistre la fonction xlBusinessDate
        Excel(xlfRegister, 0, 13, & xDll,
            TempStrNoSize("\x16""xlCalendarBusinessDate"),
            TempStrNoSize("\x05""BECN#"),
            TempStrNoSize("\x17""CALENDRIER.JOURS.OUVRES"),
            TempStrNoSize("\x22""Date de d�part,devise,jours ouvr�s"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x19""xlObjectTools - Calendar"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x50""Cette fonction calcule la date correspondant au nombre de jours ouvr�s sp�cifi�s"),
            TempStrNoSize("\x11""La date de d�part"),
            TempStrNoSize("\x09""La devise"),
            TempStrNoSize("\x25""Le nombre le jours ouvr�s � ajouter  ")) ;

    }

inline void unregisterxlCalendarBusinessDate(const XLOPER & xDll) {

        XLOPER xlRegID ;

            // lib�re la fonction xlBusinessDate
        Excel(xlfRegister, 0, 13, & xDll,
            TempStrNoSize("\x16""xlCalendarBusinessDate"),
            TempStrNoSize("\x05""BECN#"),
            TempStrNoSize("\x17""CALENDRIER.JOURS.OUVRES"),
            TempStrNoSize("\x22""Date de d�part,devise,jours ouvr�s"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x19""xlObjectTools - Calendar"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x50""Cette fonction calcule la date correspondant au nombre de jours ouvr�s sp�cifi�s"),
            TempStrNoSize("\x11""La date de d�part"),
            TempStrNoSize("\x09""La devise"),
            TempStrNoSize("\x25""Le nombre le jours ouvr�s � ajouter  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x16""xlCalendarBusinessDate")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }