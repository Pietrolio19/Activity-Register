#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>

#include "Observer.h"
using namespace std;

class Subject { //forse va resa astratta controlla
public:
    Subject(){}
    virtual ~Subject(){}

    void subscribe(Observer *obs);
    void unsubscribe(Observer *obs);

protected:
    void notify();

private:
    vector<Observer*> observers;
};
#endif //SUBJECT_H
