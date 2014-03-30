/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#include <xlsdk/xlsdkdefines.hpp>

inline void registerxlInitiateyankeeBond(const XLOPER & xDll) {

             // Enregistre la fonction xlInitiateyankeeBond
        Excel(xlfRegister, 0, 22, & xDll,
            TempStrNoSize("\x14""xlInitiateYankeeBond"),
            TempStrNoSize("\x0E""PCEEEEEEECELP#"),
            TempStrNoSize("\x0F""INSTANCE.YANKEE"),
            TempStrNoSize("\xC5""identifiant de l'instrument,date d'�mission,date effective,date de premier coupon,date de dernier coupon,date de maturit�,taux de coupon,fr�quence,base annuelle,jours de r�glement,r�gle EOM,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x42""Cette fonction instancie un instrument euro obligataire en dollar."),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date d'�mission du titre"),
            TempStrNoSize("\x2B""La date de d�but de cumul du premier coupon"),
            TempStrNoSize("\x19""La date du premier coupon"),
            TempStrNoSize("\x19""La date de dernier coupon"),
            TempStrNoSize("\x1C""La date de maturit� du titre"),
            TempStrNoSize("\x21""Le taux de coupon de l'instrument"),
            TempStrNoSize("\x16""La fr�quence de coupon"),
            TempStrNoSize("\x19""La base annuelle du titre"),
            TempStrNoSize("\x20""Le nombre de jours de r�glements"),
            TempStrNoSize("\x22""La r�gle de gestion de fin de mois"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

    }

inline void unregisterxlInitiateyankeeBond(const XLOPER & xDll) {

        XLOPER xlRegID ;

             // Enregistre la fonction xlInitiateyankeeBond
        Excel(xlfRegister, 0, 22, & xDll,
            TempStrNoSize("\x14""xlInitiateYankeeBond"),
            TempStrNoSize("\x0E""PCEEEEEEECELP#"),
            TempStrNoSize("\x0F""INSTANCE.YANKEE"),
            TempStrNoSize("\xC5""identifiant de l'instrument,date d'�mission,date effective,date de premier coupon,date de dernier coupon,date de maturit�,taux de coupon,fr�quence,base annuelle,jours de r�glement,r�gle EOM,trigger"),
            TempStrNoSize("\x01""1"),
            TempStrNoSize("\x17""xlObjectTools - Object"),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x00"""),
            TempStrNoSize("\x42""Cette fonction instancie un instrument euro obligataire en dollar."),
            TempStrNoSize("\x1D""L'identifiant de l'instrument"),
            TempStrNoSize("\x1B""La date d'�mission du titre"),
            TempStrNoSize("\x2B""La date de d�but de cumul du premier coupon"),
            TempStrNoSize("\x19""La date du premier coupon"),
            TempStrNoSize("\x19""La date de dernier coupon"),
            TempStrNoSize("\x1C""La date de maturit� du titre"),
            TempStrNoSize("\x21""Le taux de coupon de l'instrument"),
            TempStrNoSize("\x16""La fr�quence de coupon"),
            TempStrNoSize("\x19""La base annuelle du titre"),
            TempStrNoSize("\x20""Le nombre de jours de r�glements"),
            TempStrNoSize("\x22""La r�gle de gestion de fin de mois"),
            TempStrNoSize("\x17""D�clenche le recalcul  ")) ;

        Excel4(xlfRegisterId, & xlRegID, 2, & xDll,
            TempStrNoSize("\x14""xlInitiateyankeeBond")) ;

        Excel4(xlfUnregister, 0, 1, & xlRegID) ;

    }