#ifndef DATE_H
#define DATE_H
#include <sstream>
using namespace std;

class Date {
public:
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    int getDay() const {return day;}
    int getMonth() const {return month;}
    int getYear() const {return year;}
    string toString() const;

private:
    int day;
    int month;
    int year;
};

bool operator<(const Date& lhs, const Date &rhs);
#endif //DATE_H
