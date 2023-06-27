#include "Date.h"

Date::Date(int d, int m, int y)  : day(d), month(m), year(y) {
    if(day > getMaxDaysInMonth())
        day = 1;
    if(year < 0 || day < 0 || month < 0) {
        day = abs(day);
        month = abs(month);
        year = abs(year);
    }
    if(month > 12)
        month = 1;
}

int Date::getMaxDaysInMonth() {
    switch(month) {
        case 2:
            if(year%4 == 0)
                return 29;
            else
                return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

std::ostream &operator<<(std::ostream &stream, const Date &date) {
    stream << date.getDay() << "/" << date.getMonth() << "/" << date.getYear();
    return stream;
}