#include "Register.h"
#include "App.h"

//wxIMPLEMENT_APP(App); usare questa riga per vedere la gui

/*int main() {
    try {
        string desc1 = "Pranzo";
        string desc2 = "Studio";
        auto date = Date(25,4,2025);
        auto start1 = Time(12,35);
        auto end1 = Time(15,5);
        auto start2 = Time(9,5);
        auto end2 = Time(11,0);
        auto act1 = Activity(desc1, start1, end1);
        auto sharedAct1 = make_shared<Activity>(act1);
        auto act2 = Activity(desc2, start2, end2);
        auto sharedAct2 = make_shared<Activity>(act2);
        auto reg = Register();

        cout << "Aggiunta attività..." << endl;
        reg.addActivity(date, sharedAct1);
        reg.addActivity(date, sharedAct2);
        reg.printRegister(date);
        cout << endl << endl;

        cout << "Modifica attività: " << desc1 << endl;
        string newDesc = "Pranzo con amici";
        auto newAct = Activity(newDesc, start1, end1);
        auto newShared = make_shared<Activity>(newAct);
        reg.updateActivity(date, sharedAct1, newShared);
        reg.printRegister(date);
        cout << endl << endl;

        cout << "Rimozione attività:" << desc1 << endl;
        reg.removeActivity(date, sharedAct1);
        reg.printRegister(date);
        cout << endl << endl;

        cout << "Rimozione attività:" << desc2 << endl;
        reg.removeActivity(date, sharedAct2);
        reg.printRegister(date);
    }
    catch (exception& e) {
        cerr << e.what() << endl;
    }

} */ //main per vedere le funzioni di aggiunta, rimozione e modifica

