#include "Time.h"

Time::Time(int m, int h) : minute(m), hour(h) {
    if(minute > 59)
        minute = 0;
    if(hour > 23)
        hour = 0;
}

std::ostream &operator<<(std::ostream &stream, const Time &time) {
    stream << time.getHour() << ":" << time.getMinute();
    return stream;
}