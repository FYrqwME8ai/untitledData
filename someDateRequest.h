//
// Created by manifest on 01.02.2023.
//

#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H

#include<iostream>
#include<chrono>

class Date
{
public:
    //Date();
    //Date(double value);
private:
    //double unixDate;

public:
    int timeIntervalSince1970();
    int month();
    int year();
    int day();
    std::string tClock();
};

#endif //UNTITLED_DATE_H
