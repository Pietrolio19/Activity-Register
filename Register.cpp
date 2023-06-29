#include <iostream>
#include "Register.h"

void Register::addTask(const Task &task) {
    taskRegister.insert({task.getDate(), task});
}

void Register::printTasks() {
    for(auto itr : taskRegister)
        std::cout << itr.second << std::endl;
}