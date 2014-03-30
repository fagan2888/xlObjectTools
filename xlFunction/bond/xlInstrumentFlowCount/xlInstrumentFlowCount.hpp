/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#ifndef xl_instrument_flow_count
#define xl_instrument_flow_count

#include <ohxl/repositoryxl.hpp>
#include <ohxl/conversions/validations.hpp>
#include <ohxl/convert_oper.hpp>
#include <ohxl/conversions/scalartooper.hpp>

#include <qlo/conversions/coercehandle.hpp>
#include <qlo/bonds.hpp>

#include <ql/pricingengines/bond/bondfunctions.hpp>

        /* Fonction de calcul du nombre de flux restant apr�s un date donn�e */
DLLEXPORT xloper * xlInstrumentFlowCount (const char * instrumentId_,
                                          xloper * settlementDate_,
                                          xloper * trigger_) ;

#endif