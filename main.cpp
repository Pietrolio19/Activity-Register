#include <iostream>
#include "Date.h"
#include "Time.h"

int main() {
    Date d1(28, 2, 2003);
    Time t1(43, 22);
    std::cout << d1 << " " << t1 << std::endl;
    std::cout << t1 << std::endl;
}
