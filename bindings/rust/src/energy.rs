pub fn snapshot() -> AIC_EnergySnapshot 
{
    let mut snap = unsafe { 
        std::mem::zeroed() 
    };
    unsafe { 
        aic_energy_query(&mut snap) 
    };
    snap
}
