use crate::ffi:: *; 
use std::fmt; 

// repr(i32)
// derive (Debug, Copy, Clone)..
pub enum GovernanceSignal 
{
    Advisory = 0, 
    Warning = 1, 
    Critical = 2, 
    ShutdownProposal = 3, 
}

pub enum GovernanceError 
{
    PermissionDenied, 
    InvalidSignal, 
    InternalError, 
}

impl fmt :: Display for GovernanceError 
{
    fn fmt(&self, f : &mut fmt :: Formatter<'_>) -> fmt :: Result 
    {
        write!(f, "{:f}", self)
    }
}

pub fn send_signal(signal : GovernanceSignal) -> Result<(), GovernanceError>
{
    let res = unsafe 
    {
        aic_governance_signal(signal as i32)
    };

    match res {
        0 => Ok(()), 
        1 => Err(GovernanceError::PermissionDenied),
        2 => Err(GovernanceError::InvalidSignal),
        _ => Err(GovernanceError::InternalError),
    }
}