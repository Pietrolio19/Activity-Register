#include "Date.h"

bool Date::check() const{
    if (month < 1 || month > 12) //controlla la validità del mese inserito
        return false;

    if (year < 1900) //controlla la validità dell'anno inserito (anni prima del 1900 non hanno senso)
        return false;

    switch (month) { //controlla la validità del giorno inserito in base al mese
        case 2:
            if (day > 28 && year % 4 != 0) //se l'anno non è bisestile allora non si può inserire il numero 29
                return false;
            if (day > 29 && year % 4 == 0)
                return false;

        case 4:
            if (day > 30)
                return false;

        case 6:
            if (day > 30)
                return false;

        case 9:
            if (day > 30)
                return false;

        case 11:
            if (day > 30)
                return false;

        default:
            if (day > 31)
                return false;
    }
    return true;
}

string Date::toString() const {
    if (check()) { //controlla la validità della data
        ostringstream oss;
        oss << (day < 10 ? "0" : "") << day << "/" //i due controlli servono per rispettare lo struttura della data DD/MM/YYYY
            << (month < 10 ? "0": "") << month << "/"
            << year;
        return oss.str();
    }
    return "Data non valida";
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

