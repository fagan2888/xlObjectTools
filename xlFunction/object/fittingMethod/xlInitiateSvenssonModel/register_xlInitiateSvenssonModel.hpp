/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 03/01/2011
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateSvenssonModel(const XLOPER & xDll) {


             // Enregistre la fonction xlInitiateSvenssonModel
        Excel(xlfRegister, 0, 19, & xDll,
            TempStrNoSize("\x17""xlInitiateSvenssonModel"),
            TempStrNoSize("\x0B""PCPPPPPPPP#"),
            TempStrNoSize("\x19""INSTANCE.FITTING.SVENSSON"),
            TempStrNoSize("\xAE""identifiant de l'objet,type de contrainte,vecteur initial,matrice de perturbation,nombre de cycles par fil,nombre d'it�rations,it�ration maximales par cycle,pr�cision,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x1C""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x71""Cette fonction instancie les param�tres d'un fitting selon le mod�le de Svensson avec la m�thode du recuit simul�"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x35""Le type de contrainte impos� � la m�thode de Svensson"),
            TempStrNoSize("\x21""Le vecteur des param�tres initial"),
            TempStrNoSize("\x2B""La matrice des perturbations des param�tres"),
            TempStrNoSize("\x25""Le nombre de cycles par fil de calcul"),
            TempStrNoSize("\x28""Le nombre maximal d'it�rations par cycle"),
            TempStrNoSize("\x20""Le nombre d'it�rations de calcul"),
            TempStrNoSize("\x1F""La pr�cision du fitting d�sir�e"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;


    }

inline void unregisterxlInitiateSvenssonModel(const XLOPER & xDll) {


        XLOPER xlRegID ;

             // Lib�re la fonction xlInitiateSvenssonModel
        Excel(xlfRegister, 0, 19, & xDll,
            TempStrNoSize("\x17""xlInitiateSvenssonModel"),
            TempStrNoSize("\x0B""PCPPPPPPPP#"),
            TempStrNoSize("\x19""INSTANCE.FITTING.SVENSSON"),
            TempStrNoSize("\xAE""identifiant de l'objet,type de contrainte,vecteur initial,matrice de perturbation,nombre de cycles par fil,nombre d'it�rations,it�ration maximales par cycle,pr�cision,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x1C""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x71""Cette fonction instancie les param�tres d'un fitting selon le mod�le de Svensson avec la m�thode du recuit simul�"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x35""Le type de contrainte impos� � la m�thode de Svensson"),
            TempStrNoSize("\x21""Le vecteur des param�tres initial"),
            TempStrNoSize("\x2B""La matrice des perturbations des param�tres"),
            TempStrNoSize("\x25""Le nombre de cycles par fil de calcul"),
            TempStrNoSize("\x28""Le nombre maximal d'it�rations par cycle"),
            TempStrNoSize("\x20""Le nombre d'it�rations de calcul"),
            TempStrNoSize("\x1F""La pr�cision du fitting d�sir�e"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x17""xlInitiateSvenssonModel")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;


    }