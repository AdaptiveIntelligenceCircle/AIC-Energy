import ctypes 
import os 

_lib_path = os.environ.get(
    "AIC_Energy_LIB", 
    "../core/build/libaic_energy.so"
)

_lib = ctypes.CDLL(_lib_path) 

class EnergySnapshot(ctypes.Structure):
    _fields_ = [
        ("current_load", ctypes.c_double),
        ("max_capacity", ctypes.c_double), 
        ("thermal_index", ctypes.c_double), 
    ]

_lib.aic_energy_query.argtypes = [ctypes.POINTER(EnergySnapshot)]
_lib.aic_energy_query.restype  = ctypes.c_int

def energy_snapshot():
    snap = EnergySnapshot()
    res = _lib.aic_energy_query(ctypes.byref(snap))
    if res != 0:
        raise RuntimeError("Energy query failed")
    return snap