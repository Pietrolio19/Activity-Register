#include <iostream>
#include "Task.h"

Task::Task(std::string desc, Time st, Time et, Date dt) : description(desc), startingTime(st), endingTime(et), date(dt) {};

std::ostream &operator<<(std::ostream &stream, const Task &task) {
    stream << task.description << " " << task.getDate() << " from " << task.getStartingTime() << " to " << task.getEndingTime();
    return stream;
}

