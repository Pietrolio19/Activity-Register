#include "Activity.h"

void Activity::printActivity() {
    cout << desc << " dalle " << start.getTime() << " fino alle " << end.getTime() << endl;
}

