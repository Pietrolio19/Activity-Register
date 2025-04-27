#ifndef TIME_H
#define TIME_H
#include <sstream>
using namespace std;

class Time {
public:
    Time(int const hour, int const minute) {
        this->minute = minute;
        this->hour = hour;
        if (!check()) {
            throw std::invalid_argument("Invalid Time");
        }
    }

    int getMinute() const {return minute;}
    int getHour() const {return hour;}

    string toString() const;

private:
    int minute;
    int hour;
    [[nodiscard]] bool check() const;
};
#endif //TIME_H

bool operator>(const Time& lhs, const Time& rhs);