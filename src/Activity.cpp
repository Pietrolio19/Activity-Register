#include "Activity.h"

void Activity::printActivity() {
    cout << desc << " dalle " << start.getTime() << " fino alle " << end.getTime() << endl;
}

string Activity::getActivity() {
    ostringstream oss;
    oss << desc << " dalle " << start.getTime() << " fino alle " << end.getTime();
    return oss.str();
}
