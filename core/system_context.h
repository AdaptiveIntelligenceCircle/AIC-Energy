#pragma once 
#include <string> 
#include <unordered_map>
using namespace std; 

namespace aic 
{
    struct SystemContext 
    {
        string system_id; 
        string version; 

        // Dynamic signals (not blindly trusted).. 
        unordered_map<string, double> metrics; 

        bool degraded = false; 
    };
}