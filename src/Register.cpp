#include "Register.h"

void Register::addActivity(const Date &date, shared_ptr<Activity> newActivity) {
    activities[date].emplace_back(newActivity);
}


void Register::printRegister(const Date &date) const {
    auto it = activities.find(date);
    if (it != activities.end()) {
        for (auto a : it->second) {
            string act = a->toString();
            cout << act << endl;
        }
    }
    else {
        cout << "Nessuna Attività per la data: " << date.toString() << endl;
    }
}

vector<shared_ptr<Activity>>& Register::searchActivityByDate(const Date& date) {
    auto it = activities.find(date);
    vector<shared_ptr<Activity>> arr;
    if (it != activities.end()) {
        return it->second;
    }
    else {
        return arr;
    }
}

vector<Date> Register::getRegisteredDates() const {
    vector<Date> arr;
    arr.reserve(activities.size());
    for (auto a : activities) {
        arr.push_back(a.first);
    }
    return arr;
}

void Register::removeActivity(const Date &date, const shared_ptr<Activity>& removed) {
    auto it = activities.find(date);
    if (it == activities.end()) {return;}

    auto& vec = it->second;
    for (auto vit = vec.begin(); vit != vec.end();) {
        if (*vit == removed) {
            vit = vec.erase(vit);
        }
        else {
            ++vit;
        }
    }
    if (vec.empty()) {activities.erase(it);}
}

void Register::updateActivity(const Date &date, const shared_ptr<Activity> &oldActivity, const shared_ptr<Activity> &newActivity) {
    auto it = activities.find(date);
    if (it == activities.end()) {return;}

    replace(it->second.begin(), it->second.end(), oldActivity, newActivity);
}






