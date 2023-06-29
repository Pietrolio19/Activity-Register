#ifndef ACTIVITY_REGISTER_REGISTER_H
#define ACTIVITY_REGISTER_REGISTER_H

#include <iostream>
#include <map>
#include "Task.h"

class Register {
public:
    void addTask(const Task &task);

    void printTasks();
private:
    std::multimap<Date, Task, DateComparator> taskRegister;
};
#endif //ACTIVITY_REGISTER_REGISTER_H
