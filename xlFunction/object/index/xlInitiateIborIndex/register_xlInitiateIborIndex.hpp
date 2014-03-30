/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateIborIndex(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateIborIndex
        Excel(xlfRegister, 0, 19, & xDll,
            TempStrNoSize("\x13""xlInitiateIborIndex"),
            TempStrNoSize("\x0B""CCCCECPPCP#"),
            TempStrNoSize("\x13""INSTANCE.INDEX.IBOR"),
            TempStrNoSize("\x96""Identifiant de l'objet,historique de fixing,tenor,jours de r�glement,calendrier,convention des jours ouvr�s,r�gle de fin de mois,base annuelle,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x26""Cette fonction instancie un index ibor"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x25""L'identifiant de la s�rie des fixings"),
            TempStrNoSize("\x17""La maturit� de l'indice"),
            TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
            TempStrNoSize("\x19""Le calendrier des fixings"),
            TempStrNoSize("\x2A""La convention des jours ouvr�s � appliquer"),
            TempStrNoSize("\x23""La r�gle de fin de mois � appliquer"),
            TempStrNoSize("\x10""La base annuelle"),
            TempStrNoSize("\x09""trigger  ")) ;

    }

inline void unregisterxlInitiateIborIndex(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlInitiateIborIndex
        Excel(xlfRegister, 0, 19, & xDll,
            TempStrNoSize("\x13""xlInitiateIborIndex"),
            TempStrNoSize("\x0B""CCCCECPPCP#"),
            TempStrNoSize("\x13""INSTANCE.INDEX.IBOR"),
            TempStrNoSize("\x96""Identifiant de l'objet,historique de fixing,tenor,jours de r�glement,calendrier,convention des jours ouvr�s,r�gle de fin de mois,base annuelle,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x26""Cette fonction instancie un index ibor"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x25""L'identifiant de la s�rie des fixings"),
            TempStrNoSize("\x17""La maturit� de l'indice"),
            TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
            TempStrNoSize("\x19""Le calendrier des fixings"),
            TempStrNoSize("\x2A""La convention des jours ouvr�s � appliquer"),
            TempStrNoSize("\x23""La r�gle de fin de mois � appliquer"),
            TempStrNoSize("\x10""La base annuelle"),
            TempStrNoSize("\x09""trigger  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x13""xlInitiateIborIndex")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }