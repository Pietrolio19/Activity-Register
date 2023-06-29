#include <iostream>
#include <wx/wx.h>
#include "Register.h"

int main() {
    Date d1(26, 9, 2023);
    Date d2(27, 9, 2023);
    Time st(12, 13);
    Time et(15, 18);
    Task t1("Gym", st, et, d1);
    Task t2("Refill Water Supplies", st, et, d2);
    Register d1Register;
    Register d2Register;
    d1Register.addTask(t1);
    d2Register.addTask(t2);
    d1Register.printTasks();
    d2Register.printTasks();
}



