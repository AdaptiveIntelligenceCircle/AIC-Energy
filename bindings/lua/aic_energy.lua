local ffi = require("ffi")

ffi.cdef[[
typedef struct {
    double current_load;
    double max_capacity;
    double thermal_index;
} AIC_EnergySnapshot;

int aic_energy_query(AIC_EnergySnapshot* out);
int aic_governance_signal(int signal);
]]

local lib = ffi.load("aic_energy")

local M = {}

function M.energy_snapshot()
    local snap = ffi.new("AIC_EnergySnapshot")
    if lib.aic_energy_query(snap) ~= 0 then 
        error("energy query failed")
    end 
    return  {
        load = snap.current_load,
        capacity = snap.max_capacity, 
        thermal = snap.thermal_index
    }
end 

function M.send_signal(sig)
    return lib.aic_governance_signal(sig)
end 

return M 