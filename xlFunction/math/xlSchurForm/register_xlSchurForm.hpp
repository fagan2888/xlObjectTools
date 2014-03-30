/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlSchurForm(const XLOPER & xDll) {

             // Enregistre la fonction xlSchurForm
        Excel(xlfRegister, 0, 12, & xDll,
            TempStrNoSize("\x0B""xlSchurForm"),
            TempStrNoSize("\x04""PCP#"),
            TempStrNoSize("\x13""DECOMPOSITION.SCHUR"),
            TempStrNoSize("\x1F""identifiant de l'object,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3A""Cette fonction fournit la d�composition diagonale de Schur"),
            TempStrNoSize("\x26""Identifiant de la matrice � d�composer"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlSchurForm(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlSchurForm
        Excel(xlfRegister, 0, 12, & xDll,
            TempStrNoSize("\x0B""xlSchurForm"),
            TempStrNoSize("\x04""PCP#"),
            TempStrNoSize("\x13""DECOMPOSITION.SCHUR"),
            TempStrNoSize("\x1F""identifiant de l'object,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3A""Cette fonction fournit la d�composition diagonale de Schur"),
            TempStrNoSize("\x26""Identifiant de la matrice � d�composer"),
            TempStrNoSize("\x17""D�clanche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x0B""xlSchurForm")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }
