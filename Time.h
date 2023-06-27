#ifndef ACTIVITY_REGISTER_TIME_H
#define ACTIVITY_REGISTER_TIME_H

#include <iostream>

class Time {
public:
    explicit Time(int m = 0, int h = 0);

    int getMinute() const {
        return minute;
    }

    void setMinute(int m) {
        Time::minute = m;
    }

    int getHour() const {
        return hour;
    }

    void setHour(int h) {
        Time::hour = h;
    }

    friend std::ostream &operator<<(std::ostream &stream, const Time &time);

private:
    int minute, hour;
};
#endif //ACTIVITY_REGISTER_TIME_H
