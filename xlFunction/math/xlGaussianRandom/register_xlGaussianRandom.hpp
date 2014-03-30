/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlGaussianRandom(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateMatrix
        Excel(xlfRegister, 0, 13, & xDll,
            TempStrNoSize("\x10""xlGaussianRandom"),
            TempStrNoSize("\x06""PCCP#!"),
            TempStrNoSize("\x18""VARIABLE.ALEATOIRE.GAUSS"),
            TempStrNoSize("\x3A""vecteur des esperances,matrice variance-covariance,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x74""Cette fonction fournit les coordonn�es d'un vecteur al�atoire distribut� selon la loi normale multi-vari�e sp�cifi�e"),
            TempStrNoSize("\x24""Le vecteur des esp�rances marginales"),
            TempStrNoSize("\x21""La matrice de variance-covariance"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlGaussianRandom(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlInitiateMatrix
        Excel(xlfRegister, 0, 13, & xDll,
            TempStrNoSize("\x10""xlGaussianRandom"),
            TempStrNoSize("\x06""PCCP#!"),
            TempStrNoSize("\x18""VARIABLE.ALEATOIRE.GAUSS"),
            TempStrNoSize("\x3A""vecteur des esperances,matrice variance-covariance,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x15""xlObjectTools - Math"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x74""Cette fonction fournit les coordonn�es d'un vecteur al�atoire distribut� selon la loi normale multi-vari�e sp�cifi�e"),
            TempStrNoSize("\x24""Le vecteur des esp�rances marginales"),
            TempStrNoSize("\x21""La matrice de variance-covariance"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x10""xlGaussianRandom")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }