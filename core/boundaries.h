#pragma once 
using namespace std; 

#include <iostream>

namespace aic 
{
    // hard boundaries that no subsystems may cross.. 
    /// These are not configuration values.. 
    class SystemBoundaries 
    {
        public: 
        static bool allowAutonomousShutdown(); 
        static bool allowHumanOverrideBypass(); 
    }; 
}