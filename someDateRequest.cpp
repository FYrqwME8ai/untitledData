//
// Created by manifest on 01.02.2023.
//

#include "someDateRequest.h"

#include<math.h>

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>



using namespace std::chrono;


Date::Date() {
    //int x = 0;
};
//Date(double value);
//double unixDate;

int Date::timeIntervalSince1970() {


    const auto t1me = std::chrono::system_clock::now();

    std::cout << "seconds since epoch: "
              << std::chrono::duration_cast<std::chrono::seconds>(
                      t1me.time_since_epoch()).count() << '\n';

    const std::time_t t_c = std::chrono::system_clock::to_time_t(t1me);
    std::cout << "seconds since epoch: " << std::put_time(std::localtime(&t_c), "%F %T.\n") << std::flush;


    /*const std::chrono::time_point now{std::chrono::system_clock::now()};

    const std::chrono::year_month_day ymd{ std::chrono::floor<std::chrono::days>(now) };

    std::cout << "Current Year: " << static_cast<int>(ymd.year())
        << ", Month: " << static_cast<unsigned>(ymd.month())
        << ", Day: " << static_cast<unsigned>(ymd.day()) << '\n';*/

    return 0;//std::chrono;
}

/*
int month() {

}

int year() {

}

int Date::day() {
    //const auto t1me = std::chrono::system_clock::now();
   // return t1me.time_since_epoch().count()/(60*60*24);
}

int time() {

}*/

/*
#include        <time.h>
#include        <limits.h>

struct tm*
    gmtime(register const time_t* timer)
{
    static struct tm br_time;
    register struct tm* timep = &br_time;
    time_t time = *timer;
    register unsigned long dayclock, dayno;
    int year = EPOCH_YR;

    dayclock = (unsigned long)time % SECS_DAY;
    dayno = (unsigned long)time / SECS_DAY;

    timep->tm_sec = dayclock % 60;
    timep->tm_min = (dayclock % 3600) / 60;
    timep->tm_hour = dayclock / 3600;
    timep->tm_wday = (dayno + 4) % 7;       /* day 0 was a thursday
    while (dayno >= YEARSIZE(year)) {
        dayno -= YEARSIZE(year);
        year++;
    }
    timep->tm_year = year - YEAR0;
    timep->tm_yday = dayno;
    timep->tm_mon = 0;
    while (dayno >= _ytab[LEAPYEAR(year)][timep->tm_mon]) {
        dayno -= _ytab[LEAPYEAR(year)][timep->tm_mon];
        timep->tm_mon++;
    }
    timep->tm_mday = dayno + 1;
    timep->tm_isdst = 0;

    return timep;
}*/

