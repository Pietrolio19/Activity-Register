#ifndef REGISTER_H
#define REGISTER_H
#include "Activity.h"
#include "Date.h"
#include "Observer.h"
#include <wx/wx.h>
#include <map>
#include <memory>
#include <vector>

using namespace std;

class Register : public Observer, Subject { //Register osserva le attività e notifica la GUI se un'attività è cambiata in modo che si aggiorni
public:
    //per ora costruttore non necessario la mappa "si inizializza da sola"

    void addActivity(Date& date, shared_ptr<Activity> newActivity);

    void printRegister(Date& date);

    //metodi necessari per la GUI

    vector<Date> getRegisteredDates();

    vector<shared_ptr<Activity>>& getActivities(const Date& date);

    void update() override {
        notify();
    }

private:
    map<Date, vector<shared_ptr<Activity>>> activities; //ogni chiave (Date) è associata a una o più attività riconosciuta tramite un id intero
    //Lo shared_ptr viene utilizzato in modo che le modifiche fatte con i metodi di Activity siano viste anche dal Register
};
#endif //REGISTER_H
