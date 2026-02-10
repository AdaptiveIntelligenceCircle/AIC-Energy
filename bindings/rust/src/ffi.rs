// repr(C)

pub struct AIC_EnergySnapshot
{
    pub current_load : f64, 
    pub max_capacity : f64, 
    pub thermal_index: f64, 
}

extern "C"
{
    pub fn aic_energy_query(out: *mut AIC_EnergySnapshot) -> i32; 
}

