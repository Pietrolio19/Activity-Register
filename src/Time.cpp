#include "Time.h"

bool Time::check() const {
    if (minute < 0 || minute > 59 || hour < 0 || hour > 23)
        return false;
    return true;
}


string Time::getTime() const {
    if (check()) {
        ostringstream oss;
        oss << (hour < 10 ? "0" : "") << hour << ":"
            << (minute < 10 ? "0" : "") << minute; //controllo per mantenere la struttura HH/MM
        return oss.str();
    }
    return "Orario non valido";
}
