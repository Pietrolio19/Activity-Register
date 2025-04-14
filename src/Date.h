#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <sstream>

using namespace std;

class Date {
public:
    Date(int day, int month, int year) {
        try {
            this->day = day;
            this->month = month;
            this->year = year;
            if (!check())
                throw invalid_argument("Invalid Date");
        }
        catch (std::invalid_argument e) {
            cout << "Invalid Date" << endl;
        }
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
