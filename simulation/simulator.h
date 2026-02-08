#pragma once
#include "scenario.h"
#include <vector> 
using namespace std;

namespace aic
{
    class Simulator
    {
        public:
        void loadScenario(const Scenario &s);
        void run();

    };
}