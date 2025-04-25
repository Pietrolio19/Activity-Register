#ifndef REGISTER_H
#define REGISTER_H
#include "Activity.h"
#include "Date.h"
#include <map>
#include <memory>
#include <vector>

using namespace std;

class Register {
public:
    void printRegister(const Date& date);

    //metodo necessario per la GUI

    vector<Date> getRegisteredDates() const;

    //funzioni di aggiunta, modifica, cancellazione e ricerca

    vector<shared_ptr<Activity>>& searchActivityByDate(const Date& date); //nome cambiato

    void addActivity(const Date& date, shared_ptr<Activity> newActivity);

    void removeActivity(const Date& date, const shared_ptr<Activity>& remove); //aggiunta

    void updateActivity(const Date& date, const shared_ptr<Activity>& oldActivity, const shared_ptr<Activity>& newActivity); //aggiunta

private:
    map<Date, vector<shared_ptr<Activity>>> activities; //ogni chiave (Date) è associata a una o più attività
};
#endif //REGISTER_H
