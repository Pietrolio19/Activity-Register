#include "App.h"
#include "Frame.h"

bool App::OnInit() {
    string desc = "Programmazione"; //questo codice necessita di essere qui altrimenti non c'è modo di passarlo al costruttore di Frame dal main
    string desc2 = "Rimpatriata di Classe";
    Time time1(10,2);
    Time time2(14,5);
    Time time3(19, 2);
    Time time4(23, 0);
    shared_ptr<Activity> act = make_shared<Activity>(desc, time1, time2);
    shared_ptr<Activity> act2 = make_shared<Activity>(desc2, time3, time4);
    Date date(24,3,2025);
    Date date2(9,2,2025);
    Register* reg = new Register();
    reg->addActivity(date, act);
    reg->addActivity(date2, act2);
    Frame* frame = new Frame(reg);
    frame->Show(true);
    return true;
}