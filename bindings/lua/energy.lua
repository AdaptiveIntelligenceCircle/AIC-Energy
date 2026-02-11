local aic

local M = {}

function M.check(e)
    local e = aic.energy_snapshot
    if e.load > 0.9 then 
        print("[Lua] high load detected")
    end 
    return e 
end 

return M 