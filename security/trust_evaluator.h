#pragma once 

#include <iostream>
using namespace std; 

#include <string> 
#include <cmath> 

namespace aic 
{
    class TrustEvaluator 
    {
        public: 
        // returns trust score in [0,1].. 
        double evaluate(const char *component_id) const; 

        bool isTrustSufficent(const char *component_id)const; 
    }; 
}