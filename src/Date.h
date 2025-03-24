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
    bool check() const;//controlla se la data è valida
    string toString() const;

private:
    int day, month, year;
};

bool operator<(const Date& lhs, const Date& rhs); //overload necessario per il corretto funzionamento della mappa di Register
#endif //DATE_H
