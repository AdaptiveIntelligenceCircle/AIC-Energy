#pragma once
#include <string> 

using namespace std; 

namespace aic 
{
    struct Scenario 
    {
        string name;
        string description; 
        bool extreme = false; 
    }; 
}