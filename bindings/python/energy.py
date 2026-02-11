from .ffi import energy_snapshot

def get_energy_state():
    snap = energy_snapshot()
    return {
        "load": snap.current_load, 
        "capacity": snap.max_capacity, 
        "thermal": snap.thermal_index, 
    }
