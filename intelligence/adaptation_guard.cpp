#include "adaptation_guard.h"

using namespace std; 

namespace aic 
{
    static bool frozen = false; 
    
    bool AdaptationGuard :: allowUpdate(double delta)
    {
        if (frozen) return false; 

        // gioi han thay doi de tranh runaway.. 
        if (delta > 0.2 or delta < 0.2)
        {
            return false; 
        }
        return true; 
    }

    void AdaptationGuard :: freeze()
    {
        frozen = true; 
    }
} // namespace aic 
