from .ffi import _lib 
import ctypes 

class GovSignal:
    ADVISORY = 0 
    WARNING = 1 
    CRITICAL = 2 
    SHUTDOWN_PROPOSAL = 3 

_lib.aic_governance_signal.argtypes = [ctypes.c_int]
_lib.aic_governance_signal.restype = ctypes.c_int

def send_signal(signal : int):
    res = _lib.aic_governance_signal(signal)
    if res != 0:
        raise PermissionError("Governance signal denied")