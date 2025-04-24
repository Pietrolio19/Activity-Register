#include "Activity.h"

void Activity::printActivity() {
    cout << desc << " dalle " << start.toString() << " fino alle " << end.toString() << endl;
}

string Activity::getActivity() {
    ostringstream oss;
    oss << desc << " dalle " << start.toString() << " fino alle " << end.toString();
    return oss.str();
}
