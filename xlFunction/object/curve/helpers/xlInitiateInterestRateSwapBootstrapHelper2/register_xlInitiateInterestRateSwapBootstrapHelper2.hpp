/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 11/02/11
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateInterestRateSwapBootstrapHelper2(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateInterestRateSwapBootstrapHelper2
        Excel(xlfRegister, 0, 22, & xDll,
            TempStrNoSize("\x2A""xlInitiateInterestRateSwapBootstrapHelper2"),
            TempStrNoSize("\x0E""PCCCPPPEPPCPP#"),
            TempStrNoSize("\x1C""INSTANCE.INTERPOLATION.SWAP2"),
            TempStrNoSize("\xC9""Identifiant de l'objet,tenor,calendrier,jours de r�glement,fr�quence jambe fixe,base jambe fixe,taux fixe,fr�quence jambe flottante,base jambe flottante,taux de r�f�rence,courbe d'actualisation,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x41""Cette fonction qualifie un swap pour l'interpolation d'une courbe"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x10""Le t�nor du swap"),
			TempStrNoSize("\x1A""Le calendrier de r�f�rence"),
			TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
			TempStrNoSize("\x28""La fr�quence de la jambe fixe (optionel)"),
			TempStrNoSize("\x23""La base de la jambe fixe (optionel)"),
			TempStrNoSize("\x14""Le taux fixe du swap"),
			TempStrNoSize("\x2C""La fr�quence de la jambe variable (optionel)"),
            TempStrNoSize("\x27""La base de la jambe variable (optionel)"),
			TempStrNoSize("\x29""Le taux de r�f�rence de la jambe variable"),
            TempStrNoSize("\x2A""L'identifiant de la courbe d'actualisation"),
            TempStrNoSize("\x09""trigger  ")) ;

    }


inline void unregisterxlInitiateInterestRateSwapBootstrapHelper2(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // supprime la fonction xlInitiateInterestRateSwapBootstrapHelper2
        Excel(xlfRegister, 0, 22, & xDll,
            TempStrNoSize("\x2A""xlInitiateInterestRateSwapBootstrapHelper2"),
            TempStrNoSize("\x0E""PCCCPPPEPPCPP#"),
            TempStrNoSize("\x1C""INSTANCE.INTERPOLATION.SWAP2"),
            TempStrNoSize("\xC9""Identifiant de l'objet,tenor,calendrier,jours de r�glement,fr�quence jambe fixe,base jambe fixe,taux fixe,fr�quence jambe flottante,base jambe flottante,taux de r�f�rence,courbe d'actualisation,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x41""Cette fonction qualifie un swap pour l'interpolation d'une courbe"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x10""Le t�nor du swap"),
			TempStrNoSize("\x1A""Le calendrier de r�f�rence"),
			TempStrNoSize("\x1F""Le nombre de jours de r�glement"),
			TempStrNoSize("\x28""La fr�quence de la jambe fixe (optionel)"),
			TempStrNoSize("\x23""La base de la jambe fixe (optionel)"),
			TempStrNoSize("\x14""Le taux fixe du swap"),
			TempStrNoSize("\x2C""La fr�quence de la jambe variable (optionel)"),
            TempStrNoSize("\x27""La base de la jambe variable (optionel)"),
			TempStrNoSize("\x29""Le taux de r�f�rence de la jambe variable"),
            TempStrNoSize("\x2A""L'identifiant de la courbe d'actualisation"),
            TempStrNoSize("\x09""trigger  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x2A""xlInitiateInterestRateSwapBootstrapHelper2")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }