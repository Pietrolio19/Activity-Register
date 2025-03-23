#include "Register.h"
#include "Activity.h"

int main() {
    auto register1 = new Register();
    string desc = "Programmazione";
    Time time1(8, 45);
    Time time2(10, 34);
    shared_ptr<Activity> act1 = make_shared<Activity>(desc, time1, time2);
    act1->printActivity();
    Date date(9,2,2025);
    //Date date2(10,2,2025);
    Time newTime(10,50);
    register1->addActivity(date, act1);
    register1->printRegister(date);
    act1->modifyEndingTime(newTime);
    register1->printRegister(date);
    //TODO creare la GUI, vedere se è possibile creare funzionalità come aggiunta, rimozione e modifica dalla GUI
    //TODO Unit-Testing
}