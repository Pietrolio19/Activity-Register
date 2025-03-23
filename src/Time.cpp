#include "Time.h"

string Time::getTime() const {
    ostringstream oss;
    oss << (hour < 10 ? "0" : "") << hour << ":"
        << (minute < 10 ? "0" : "") << minute; //controllo per mantenere la struttura HH/MM
    return oss.str();
}
