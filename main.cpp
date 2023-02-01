#include <iostream>

#include "someDateRequest.h"

int main() {

    Date* timeTest = new Date();
    timeTest->timeIntervalSince1970();

    std::cout << "TEST" << std::endl;
    std::cout << timeTest->day() << std::endl;
    std::cout << timeTest->month() << std::endl;
    std::cout << timeTest->year() << std::endl;
    std::cout << timeTest->tClock() << std::endl;


    //std::cout << timeTest->timeIntervalSince1970() << std::endl;

    return 0;

}
