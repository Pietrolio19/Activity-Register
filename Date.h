#ifndef ACTIVITY_REGISTER_DATE_H
#define ACTIVITY_REGISTER_DATE_H

#include <iostream>

class Date {
public:

    explicit Date(int d = 1, int m = 1, int y = 2000);

    ~Date() {};

    int getDay() const {
        return day;
    }

    void setDay(int d) {
        Date::day = d;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int m) {
        Date::month = m;
    }

    int getYear() const {
        return year;
    }

    void setYear(int y) {
        Date::year = y;
    }

    friend std::ostream& operator<<(std::ostream& stream, const Date& date);

private:
    int day, month, year;
    int getMaxDaysInMonth();
};

#endif //ACTIVITY_REGISTER_DATE_H
