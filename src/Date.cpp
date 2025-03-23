#include "Date.h"

string Date::toString() const {
    ostringstream oss;
    oss << (day < 10 ? "0" : "") << day << "/" //i due controlli servono per rispettare lo struttura della data DD/MM/YYYY
        << (month < 10 ? "0": "") << month << "/"
        << year;
    return oss.str();
}

bool operator<(const Date& lhs, const Date& rhs) { //overload dell'operatore < per corretto funzionamento della mappa del registro
    if (lhs.getYear() != rhs.getYear()) {
        return lhs.getYear() < rhs.getYear();
    } else if (lhs.getMonth() != rhs.getMonth()) {
        return lhs.getMonth() < rhs.getMonth();
    } else {
        return lhs.getDay() < rhs.getDay();
    }
}

