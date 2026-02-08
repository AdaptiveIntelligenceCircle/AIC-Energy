#pragma once 
#include <string> 

using namespace std; 

namespace aic 
{
    enum class DecisionClass 
    {
        Routine, 
        Structural, 
        Existential
    }; 

    class GovernanceEngine 
    {
        public: 
        bool approveDecision(
            const string &proposal_id, 
            DecisionClass cls, 
            const string &rationale
        );  

        void recordDissent(
            const string &proposal_id, 
            const string &dissent_note 
        ); 
    }; 
}