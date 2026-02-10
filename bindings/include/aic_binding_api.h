#pragma once 
#include "aic_binding_types.h"
#include <iostream>

using namespace std; 

#ifdef __cplusplus 
extern "C"
{
    #endif 
    AIC_Result aic_init(); 
    AIC_Result aic_shutdown(); 

    // energy.. 
    AIC_Result aic_energy_query(AIC_EnergySnapshot *out); 
    AIC_Result aic_energy_request(AIC_EnergySnapshot *req); 

    // Governance 
    AIC_Result aic_governance_signal(); 

    // safety.. 
    AIC_Result aic_binding_check_permission(); 

    #ifdef __cplusplus 
}
#endif 