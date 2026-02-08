#pragma once 
#include <iostream>
using namespace std; 

namespace aic
{
    class DecisionRecord 
    {
        public: 
        DecisionRecord() = default;
        DecisionRecord(const string &id,  
        const string &rationale); 

        void addissent(const string &note); 
    };
}