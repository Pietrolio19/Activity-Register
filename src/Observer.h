#ifndef OBSERVER_H
#define OBSERVER_H

class Observer { //classe astratta
public:
    virtual void update() = 0;
    virtual ~Observer() {}
};
#endif //OBSERVER_H
