/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 03/01/2011
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateNelsonSiegelModel (const XLOPER & xDll) {


             // Enregistre la fonction xlInitiateNelsonSiegelModel
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x1B""xlInitiateNelsonSiegelModel"),
            TempStrNoSize("\x07""PCPPPP#"),
            TempStrNoSize("\x1E""INSTANCE.FITTING.NELSON.SIEGEL"),
            TempStrNoSize("\x36""identifiant,vecteur de d�part,lambda,pr�cision,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x55""Cette fonction instancie les param�tres d'un fitting selon le mod�le de Nelson-Siegel"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x21""Le vecteur des param�tres initial"),
            TempStrNoSize("\x16""Le param�tre d'�chelle"),
            TempStrNoSize("\x1F""La pr�cision du fitting d�sir�e"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;


    }

inline void unregisterxlInitiateNelsonSiegelModel (const XLOPER & xDll) {


        XLOPER xlRegID ;

             // Enregistre la fonction xlInitiateNelsonSiegelModel
        Excel(xlfRegister, 0, 15, & xDll,
            TempStrNoSize("\x1B""xlInitiateNelsonSiegelModel"),
            TempStrNoSize("\x07""PCPPPP#"),
            TempStrNoSize("\x1E""INSTANCE.FITTING.NELSON.SIEGEL"),
            TempStrNoSize("\x36""identifiant,vecteur de d�part,lambda,pr�cision,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x55""Cette fonction instancie les param�tres d'un fitting selon le mod�le de Nelson-Siegel"),
            TempStrNoSize("\x19""L'identifiant de l'object"),
            TempStrNoSize("\x21""Le vecteur des param�tres initial"),
            TempStrNoSize("\x16""Le param�tre d'�chelle"),
            TempStrNoSize("\x1F""La pr�cision du fitting d�sir�e"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x1B""xlInitiateNelsonSiegelModel")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;


    }