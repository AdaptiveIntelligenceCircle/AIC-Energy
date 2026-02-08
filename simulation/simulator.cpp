#include "simulator.h"
#include <iostream>

namespace aic {

void Simulator::loadScenario(const Scenario& s) {
    current = s;
}

void Simulator::run() {
    // Simulation KHÔNG được thay đổi trạng thái hệ thống thật
    std::cout << "[SIMULATION] Running scenario: "
              << current.name << std::endl;

    if (current.extreme) {
        std::cout << "[SIMULATION] Extreme condition enabled\n";
    }
}


}
