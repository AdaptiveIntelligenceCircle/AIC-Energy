#pragma once
#include <string> 

using namespace std; 

namespace aic 
{
    struct Recommendation 
    {
        string action; 
        double confidence; 
    }; 

    class DecisionEngine 
    {
        public: 
        Recommendation propose(); 

        // never execute directly. 
    }; 
}