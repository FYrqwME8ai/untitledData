#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

#include <iostream>
#include <chrono>

class Date {
public:
    Date();
    Date(long long value);
private:
    std::chrono::time_point<std::chrono::system_clock> now;
public:
    int timeIntervalSince1970();
    int month();
    int year();
    int day();
    std::string getClock();
};

#endif //UNTITLED_DATE_H
