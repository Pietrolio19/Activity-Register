#include "Register.h"

void Register::addActivity(Date &date, shared_ptr<Activity> newActivity) {
    int id = activityCounter[date];
    newActivity->subscribe(this);
    activities[date].emplace_back(id, newActivity);
    //notify(); per GUI dopo
}

//ragionare su un eventuale funzione per rimuovere una attività

void Register::printRegister(Date &date) {
    auto it = activities.find(date);
    if (it != activities.end()) {
        for (auto a : it->second) {
            a.second->printActivity();
        }
    }
    else {
        cout << "Nessuna Attività per la data: " << date.toString() << endl;
    }
}





