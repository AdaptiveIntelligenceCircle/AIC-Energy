// AIC energy Rust bindings.. 
// This crate provides ** safe, audited access**
// to AIC-Energy core via a stable C API. 

// Philosophy : 
// - No direct state mutation.
// - ALL actions are intent - based..
// !Governance -first, performance aware..

mod ffi; 
mod energy;
mod governance;

pub use energy::*; 
pub use governance::*; 

// Initialize AIC Energy core from Rust.. 

pub fn init() -> Result<(), i32> 
{
    let res = unsafe { ffi::aic_init() };
    if res == 0 { Ok(()) } else { Err(res) }
}

/// Graceful shutdown
pub fn shutdown() -> Result<(), i32> {
    let res = unsafe { ffi::aic_shutdown() };
    if res == 0 { Ok(()) } else { Err(res) }
}