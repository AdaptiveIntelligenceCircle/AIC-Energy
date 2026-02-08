#include "trust_evaluator.h"
using namespace std; 

#include <string> 
#include <cmath>

namespace aic 
{
    double TrustEvaluator :: evaluate(const char *component_id) const 
    {
        (void)component_id; 
        return 0.3;
    }

    bool TrustEvaluator :: isTrustSufficent(const char *component_id) const 
    {
        return evaluate(component_id) >= 0.7; 
    }
}