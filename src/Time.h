#ifndef TIME_H
#define TIME_H
#include <sstream>
using namespace std;

class Time {
public:
    Time(int hour, int minute) {
        this->minute = minute;
        this->hour = hour;
        if (!check()) {
            throw std::invalid_argument("Invalid Time"); //cambiato
        }
    }

    int getMinute() const {return minute;}
    int getHour() const {return hour;}

    string toString() const; //nome cambiato

private:
    int minute;
    int hour;
    [[nodiscard]] bool check() const; //funzione spostata
};
#endif //TIME_H

bool operator>(const Time& lhs, const Time& rhs);