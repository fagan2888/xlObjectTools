/*
 *  xlObjectTools
 *
 *  Created by Jean-Matthieu VERMOSEN on 31/05/09
 *  Copyright 2009. All rights reserved.
 *
 */

#ifndef register_experimental_hpp
#define register_experimental_hpp

#include <xlsdk/xlsdkdefines.hpp>

#include <xlFunction/experimental/xlEfficientConstrainedFrontier/register_xlEfficientConstrainedFrontier.hpp>
#include <xlFunction/experimental/xlKalmanFilter/register_xlKalmanFilter.hpp>

inline void register_experimental(const XLOPER & xDll) {
    

                    // register experimental
            registerxlEfficientConstrainedFrontier(xDll);
			registerxlKalmanFilter(xDll);
       
    };

inline void unregister_experimental(const XLOPER & xDll) {


                    // unregister experimental
            unregisterxlEfficientConstrainedFrontier(xDll) ;
			unregisterxlKalmanFilter(xDll);

    };


#endif
