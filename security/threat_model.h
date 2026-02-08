#pragma once
#include <string>

#include <vector>
using namespace std;

namespace aic
{
    struct Threat
    {
        string actor;
        string capability;
        string impact;
    };

    class ThreatModel 
    {
        public: 
        void registerThreat(const Threat &t); 
        vector<Threat> activeThreats() const; 
    }; 
}
