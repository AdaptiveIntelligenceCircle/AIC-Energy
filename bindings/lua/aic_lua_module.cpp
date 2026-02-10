#include <iostream>
using namespace std; 
#include <lua.h>
#include "aic_binding_api.h"

namespace aic 
{
    int lua_energy_snapshot(lua_State *L)
    {
        AIC_EnergySnapshot snap; 
        aic_energy_query(&snap); 

        lua_newtable(L); 
        lua_pushnumber(L, snap.current_load); 
        lua_setfield(L, -2, "load"); 
        return 1; 
    }
}
