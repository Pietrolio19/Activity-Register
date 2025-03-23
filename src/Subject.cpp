#include "Subject.h"

void Subject::subscribe(Observer *obs) {
    observers.push_back(obs);
}

void Subject::notify() {
    for (auto obs: observers) {
        obs->update();
    }
}

void Subject::unsubscribe(Observer *obs) {
    observers.erase(
        remove(observers.begin(), observers.end(), obs), observers.end());
}