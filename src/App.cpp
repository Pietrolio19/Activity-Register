#include "App.h"
#include "Frame.h"

bool App::OnInit() {
    //descrizioni attività
    string desc = "Programmazione"; //questo codice necessita di essere qui altrimenti non c'è modo di passarlo al costruttore di Frame dal main
    string desc2 = "Pranzo in Famiglia";
    string desc3 = "Corsa Mattutina";
    string desc4 = "Gita Fuori Porta";
    string desc5 = "Riunione Generale";
    string desc6 = "Incontro con Fornitore";

    //orari
    Time time1(10,2);
    Time time2(14,5);
    Time time3(19, 2);
    Time time4(23, 0);
    Time start3(6,5);
    Time end3(9,5);
    Time start4(7,30);
    Time end4(20,40);
    Time start5(10, 10);
    Time end5(13, 10);
    Time start6(16,5);
    Time end6(17,30);

    //creazione attività
    shared_ptr<Activity> act = make_shared<Activity>(desc, time1, time2);
    shared_ptr<Activity> act2 = make_shared<Activity>(desc2, time3, time4);
    shared_ptr<Activity> act3 = make_shared<Activity>(desc3, start3, end3);
    shared_ptr<Activity> act4 = make_shared<Activity>(desc4, start4, end4);
    shared_ptr<Activity> act5 = make_shared<Activity>(desc5, start5, end5);
    shared_ptr<Activity> act6 = make_shared<Activity>(desc6, start6, end6);

    //creazione date
    Date date(24,3,2025);
    Date date2(9,2,2025);
    Date date3(14,4,2025);
    Date date4(10, 3, 2025);

    //creazione registro e aggiunta date
    Register* reg = new Register();
    reg->addActivity(date, act);
    reg->addActivity(date2, act2);
    reg->addActivity(date2, act3);
    reg->addActivity(date3, act4);
    reg->addActivity(date4, act5);
    reg->addActivity(date4, act6);

    //aggiunta del registro al frame per poter visualizzare tutto
    Frame* frame = new Frame(reg);
    frame->Show(true);
    return true;
}