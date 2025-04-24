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
    //per ora costruttore non necessario la mappa "si inizializza da sola"

    void addActivity(Date& date, shared_ptr<Activity> newActivity);

    void printRegister(Date& date);

    //metodi necessari per la GUI

    vector<Date> getRegisteredDates();

    vector<shared_ptr<Activity>>& getActivities(const Date& date); //rinominare

    //aggiunta, modifica e cancellazione

private:
    map<Date, vector<shared_ptr<Activity>>> activities; //ogni chiave (Date) è associata a una o più attività
};
#endif //REGISTER_H
