/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#ifndef xl_volatility_ewma
#define xl_volatility_ewma

#include <ohxl/conversions/validations.hpp>

#include <ohxl/conversions/scalartooper.hpp>

#include <ohxl/repositoryxl.hpp>

#include <bot/tools/timeSeries/TimeSeriesObject.hpp>

#include <bot/math/covarianceEWMA/covarianceEWMA.hpp>

#include <bot/math/meanEWMA/meanEWMA.hpp>

        /* fonction de calcul de l'ecart-type EWMA d'une s�rie */
DLLEXPORT xloper * xlVolatilityEWMA(const char * timeSeriesId_,
                                    const double * decay_,
									const double * valueDate_,
                                    xloper * trigger_) ;

#endif