#ifndef ACTIVITY_REGISTER_TASK_H
#define ACTIVITY_REGISTER_TASK_H

#include <iostream>
#include <string>
#include "Time.h"
#include "Date.h"

class Task {
public:
    Task(std::string desc, Time st, Time et, Date dt);

    const Time &getStartingTime() const {
        return startingTime;
    }

    void setStartingTime(const Time &starting) {
        startingTime = starting;
    }

    const Time &getEndingTime() const {
        return endingTime;
    }

    void setEndingTime(const Time &ending) {
        endingTime = ending;
    }

    const Date &getDate() const {
        return date;
    }

    void setDate(const Date &dt) {
        Task::date = dt;
    }

    friend std::ostream &operator<<(std::ostream &stream, const Task &task);

private:
    std::string description;
    Time startingTime;
    Time endingTime;
    Date date;
};
#endif //ACTIVITY_REGISTER_TASK_H
