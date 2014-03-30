/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateInterpolatedCurve(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateIntepolatedCurve
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x1B""xlInitiateInterpolatedCurve"),
            TempStrNoSize("\x07""CCPCPP#"),
            TempStrNoSize("\x1A""INSTANCE.COURBE.INTERPOLEE"),
            TempStrNoSize("\x42""Identifiant de l'objet,Date de calcul,calendrier,Helpers,Trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x62""Cette fonction instancie une courbe de taux interpol�e � partir des instruments pass�s en argument"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x11""La date de calcul"),
            TempStrNoSize("\x1A""Le calendrier de la courbe"),
            TempStrNoSize("\x1B""Les helpers des instruments"),
            TempStrNoSize("\x15""d�clenche le calcul  ")) ;

    }

inline void unregisterxlInitiateInterpolatedCurve(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // lib�re la fonction xlInitiateIntepolatedCurve
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x1B""xlInitiateInterpolatedCurve"),
            TempStrNoSize("\x07""CCPCPP#"),
            TempStrNoSize("\x1A""INSTANCE.COURBE.INTERPOLEE"),
            TempStrNoSize("\x42""Identifiant de l'objet,Date de calcul,calendrier,Helpers,Trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x62""Cette fonction instancie une courbe de taux interpol�e � partir des instruments pass�s en argument"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x11""La date de calcul"),
            TempStrNoSize("\x1A""Le calendrier de la courbe"),
            TempStrNoSize("\x1B""Les helpers des instruments"),
            TempStrNoSize("\x15""d�clenche le calcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x1B""xlInitiateInterpolatedCurve")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }
