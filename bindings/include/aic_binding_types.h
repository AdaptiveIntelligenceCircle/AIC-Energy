#pragma once 

typedef enum  
{
    AIC_LANG_PYTHON,
    AIC_LANG_LUA, 
    AIC_LANG_RUST

}AIC_BindingLang; 

typedef enum 
{
    AIC_OK = 0, 
    AIC_ERR_DENIED, 
    AIC_ERR_INVALID, 
    AIC_ERR_INTERNAL
} AIC_Result; 

typedef struct 
{
    /* data */
    double current_load; 
    double max_capacity; 
    double thermal_index; 
    
} AIC_EnergySnapshot;
