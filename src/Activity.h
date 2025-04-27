#ifndef ACTIVITY_H
#define ACTIVITY_H
#include "Time.h"
#include <iostream>

using namespace std;

class Activity {
public:
    Activity(const string& desc, const Time start, const Time end) : start(start), end(end) {
        this->desc = desc;
        if (start > end) {
            throw invalid_argument("Invalid Starting Time");
        }
    }

    [[nodiscard]] string toString() const;

private:
    string desc;
    Time start;
    Time end;
};
#endif //ACTIVITY_H
