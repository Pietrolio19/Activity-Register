#include "Register.h"

void Register::addActivity(Date &date, shared_ptr<Activity> newActivity) {
    activities[date].emplace_back(newActivity);
    //notify(); per GUI dopo
}

//ragionare su un eventuale funzione per rimuovere una attività

void Register::printRegister(Date &date) {
    auto it = activities.find(date);
    if (it != activities.end()) {
        for (auto a : it->second) {
            a->printActivity();
        }
    }
    else {
        cout << "Nessuna Attività per la data: " << date.toString() << endl;
    }
}

vector<shared_ptr<Activity>>& Register::getActivities(const Date& date) {
    auto it = activities.find(date);
    vector<shared_ptr<Activity>> arr;
    if (it != activities.end()) {
        return it->second;
    }
    else {
        return arr;
    }
}

vector<Date> Register::getRegisteredDates() {
    vector<Date> arr;
    arr.reserve(activities.size());
    for (auto a : activities) {
        arr.push_back(a.first);
    }
    return arr;
}




