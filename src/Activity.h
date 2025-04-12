#ifndef ACTIVITY_H
#define ACTIVITY_H
#include "Time.h"
#include <iostream>

using namespace std;

class Activity {
public:
    Activity(string desc, Time start, Time end) : start(start), end(end) {
        this->desc = desc;
    }

    string getActivity();

    void printActivity();

private:
    string desc;
    Time start;
    Time end;
};

#endif //ACTIVITY_H
