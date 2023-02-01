#include <iostream>

#include "someDateRequest.h"

int main() {

    Date* timeTest = new Date();

    std::cout << timeTest->timeIntervalSince1970() << std::endl;

    return 0;

}
