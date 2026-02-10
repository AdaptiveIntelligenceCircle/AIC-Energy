local aic 

function Simulate()
    local e = aic.energy_snapshot()
    if e.load > 0.8 then 
        aic.log("High Load detected")
    end 
end 
