#include "someDateRequest.h"

int main() {
    Date* timeTest = new Date();

    std::cout << "Seconds since epoch: " << timeTest->timeIntervalSince1970() << std::endl;
    std::cout << timeTest->day() << ".";
    std::cout << timeTest->month() << ".";
    std::cout << timeTest->year() << std::endl;
    std::cout << timeTest->getClock() << std::endl;

    return 0;
}
