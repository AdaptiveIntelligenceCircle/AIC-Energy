#pragma once
#include <vector>
#include <string>
using namespace std; 

namespace aic {

struct ReplayEvent {
    string timestamp;
    string description;
};

class ReplayLog {
public:
    void record(const ReplayEvent& e) {
        events.push_back(e);
    }

    const vector<ReplayEvent>& history() const {
        return events;
    }

private:
    vector<ReplayEvent> events;
};

}
