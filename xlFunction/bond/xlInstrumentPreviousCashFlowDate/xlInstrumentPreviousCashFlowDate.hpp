/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 12/08/10
 *  Copyright 2009. All /rights r/eserved.
 *
 */

#ifndef xl_instrument_previous_cashflow_date
#define xl_instrument_previous_cashflow_date

#include <ql/pricingengines/bond/bondfunctions.hpp>

#include <ql/instruments/bond.hpp>


#include <qlo/conversions/coercehandle.hpp>

#include <qlo/conversions/coerceobject.hpp>

#include <qlo/conversions/coercelibrarysame.hpp>

#include <qlo/bonds.hpp>


#include <ohxl/repositoryxl.hpp>

#include <ohxl/conversions/validations.hpp>

#include <ohxl/convert_oper.hpp>

#include <ohxl/conversions/scalartooper.hpp>

        /* d�finit la date de cashflow pr�c�dente */
DLLEXPORT xloper * xlInstrumentPreviousCashFlowDate (const char * objectID_,
                                                     xloper * testDate_,
                                                     xloper * trigger_) ;

#endif
