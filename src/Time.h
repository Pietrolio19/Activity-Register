#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <sstream>
using namespace std;

class Time {
public:
    Time(int hour, int minute);

    int getMinute() const {return minute;}
    int getHour() const {return hour;}

    string getTime() const;

    bool check() const;

private:
    int minute;
    int hour;
};
#endif //TIME_H
