/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateFixedLegUnitedStates(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateFixedLeg
        Excel(xlfRegister, 0, 20, & xDll,
            TempStrNoSize("\x1E""xlInitiateFixedLegUnitedStates"),
            TempStrNoSize("\x0C""PCEPPEPEPPP#"),
            TempStrNoSize("\x21""INSTANCE.JAMBE.FIXE.UNITED.STATES"),
            TempStrNoSize("\xA1""Identifiant de l'instrument,date effective,date de premier coupon,date de dernier coupon,date de maturit�,notionel,taux de coupon,fr�quence,base annuelle,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3A""Cette fonction instancie une jambe fixe de swap en dollar."),
            TempStrNoSize("\x19""L'identifiant de la jambe"),
            TempStrNoSize("\x2B""La date de d�but de cumul du premier coupon"),
            TempStrNoSize("\x19""La date du premier coupon"),
            TempStrNoSize("\x19""La date de dernier coupon"),
            TempStrNoSize("\x1F""La date de maturit� de la jambe"),
            TempStrNoSize("\x16""Le notionel du contrat"),
            TempStrNoSize("\x11""Le taux de coupon"),
            TempStrNoSize("\x16""La fr�quence de coupon"),
            TempStrNoSize("\x1C""La base annuelle de la jambe"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlInitiateFixedLegUnitedStates(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlInitiateFixedLeg
        Excel(xlfRegister, 0, 20, & xDll,
            TempStrNoSize("\x1E""xlInitiateFixedLegUnitedStates"),
            TempStrNoSize("\x0C""PCEPPEPEPPP#"),
            TempStrNoSize("\x21""INSTANCE.JAMBE.FIXE.UNITED.STATES"),
            TempStrNoSize("\xA1""Identifiant de l'instrument,date effective,date de premier coupon,date de dernier coupon,date de maturit�,notionel,taux de coupon,fr�quence,base annuelle,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x3A""Cette fonction instancie une jambe fixe de swap en dollar."),
            TempStrNoSize("\x19""L'identifiant de la jambe"),
            TempStrNoSize("\x2B""La date de d�but de cumul du premier coupon"),
            TempStrNoSize("\x19""La date du premier coupon"),
            TempStrNoSize("\x19""La date de dernier coupon"),
            TempStrNoSize("\x1F""La date de maturit� de la jambe"),
            TempStrNoSize("\x16""Le notionel du contrat"),
            TempStrNoSize("\x11""Le taux de coupon"),
            TempStrNoSize("\x16""La fr�quence de coupon"),
            TempStrNoSize("\x1C""La base annuelle de la jambe"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x1E""xlInitiateFixedLegUnitedStates")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }