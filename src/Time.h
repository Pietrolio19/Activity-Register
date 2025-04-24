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
            throw std::invalid_argument("Invalid Time");
        }
    }

    int getMinute() const {return minute;}
    int getHour() const {return hour;}

    string toString() const;

    bool check() const;

private:
    int minute;
    int hour;
};
#endif //TIME_H
