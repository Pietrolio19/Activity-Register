#include "Time.h"

bool Time::check() const { //privato
    if (minute < 0 || minute > 59 || hour < 0 || hour > 23)
        return false;
    return true;
}


string Time::toString() const {
    if (check()) {
        ostringstream oss;
        oss << (hour < 10 ? "0" : "") << hour << ":"
            << (minute < 10 ? "0" : "") << minute; //controllo per mantenere la struttura HH/MM
        return oss.str();
    }
    return "Orario non valido";
}

bool operator>(const Time &lhs, const Time &rhs) {
    if (lhs.getHour() != rhs.getHour()) {
        return lhs.getHour() > rhs.getHour();
    }
    else if(lhs.getMinute() != rhs.getMinute()) {
        return lhs.getMinute() > rhs.getMinute();
    }
    else return false; //lhs == rhs
}

