#include "governance_engine.h"
#include <unordered_map>

#include <vector> 
using namespace std; 

namespace aic 
{
    static unordered_map<string, DecisionClass> decision_registry;
    static unordered_map<string, vector<string>> dissent_log; 

    bool GovernanceEngine :: approveDecision(
        const string &proprosal_id, 
        DecisionClass cls, 
        const string &rationale
    )
    {
        if (cls == DecisionClass :: Existential)
        {
            return false; 
        }

        decision_registry[proprosal_id] = cls; 

        (void) rationale; 
        return true; 
    }
}