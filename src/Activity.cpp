#include "Activity.h"

string Activity::toString() {
    ostringstream oss;
    oss << desc << " dalle " << start.toString() << " fino alle " << end.toString();
    return oss.str();
}
