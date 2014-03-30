/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlSwapNPV(const XLOPER & xDll) {

             // Enregistre la fonction xlSwapNPV
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x09""xlSwapNPV"),
            TempStrNoSize("\x06""PCCPP#"),
            TempStrNoSize("\x08""SWAP.NPV"),
            TempStrNoSize("\x4D""Identifiant de l'instrument,courbe d'actualisation,courbe forward,D�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Swap"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x38""Cette fonction d�termine la NPV d'une jambe ou d'un swap"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x2A""L'identifiant de la courbe d'actualisation"),
            TempStrNoSize("\x36""L'identifiant de la courbe d'extrapolation de l'indice"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

    }

inline void unregisterxlSwapNPV(const XLOPER & xDll) {

        XLOPER xlRegID ;

            // lib�re la fonction xlSwapNPV
        Excel(xlfRegister, 0, 14, & xDll,
            TempStrNoSize("\x09""xlSwapNPV"),
            TempStrNoSize("\x06""PCCPP#"),
            TempStrNoSize("\x08""SWAP.NPV"),
            TempStrNoSize("\x4D""Identifiant de l'instrument,courbe d'actualisation,courbe forward,D�clencheur"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Swap"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x38""Cette fonction d�termine la NPV d'une jambe ou d'un swap"),
            TempStrNoSize("\x16""Le nom de l'instrument"),
            TempStrNoSize("\x2A""L'identifiant de la courbe d'actualisation"),
            TempStrNoSize("\x36""L'identifiant de la courbe d'extrapolation de l'indice"),
            TempStrNoSize("\x1C""Le d�clencheur du recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x13""xlSwapNPV")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }