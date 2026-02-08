#pragma once 

using namespace std; 

namespace aic 
{
    class AdaptationGuard 
    {
        public:
        bool allowUpdate(double delta); 
        void freeze(); 
    }; 
}