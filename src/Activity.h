#ifndef ACTIVITY_H
#define ACTIVITY_H
#include "Time.h"
#include "Subject.h"
#include <iostream>

using namespace std;

class Activity : public Subject {
public:
    Activity(string desc, Time start, Time end) : start(start), end(end) {
        this->desc = desc;
    }

    string getActivity();

    void modifyDescription(string newDesc) {
        this->desc = newDesc;
        notify();
    }

    void modifyStartingTime(Time newStart) {
        this->start = newStart;
        notify();
    }

    void modifyEndingTime(Time newEnd) {
        this->end = newEnd;
        notify();
    }

    void printActivity();

private:
    string desc;
    Time start;
    Time end;
};

#endif //ACTIVITY_H
