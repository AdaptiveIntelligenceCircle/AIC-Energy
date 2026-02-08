#include "boundaries.h"
using namespace std; 

namespace aic 
{
    bool SystemBoundaries :: allowAutonomousShutdown()
    {
        // Tuyet doi khong cho phep shutdown hoan toan khong co con nguoi.. 
        return false; 
    }

    bool SystemBoundaries :: allowHumanOverrideBypass()
    {
        return false; 
    }

}