//
// Created by manifest on 01.02.2023.
//

#include "someDateRequest.h"

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <time.h>

using namespace std::chrono;

/*Date::Date() {
    int x = 0;
};
Date(double value);
double unixDate;*/

int Date::timeIntervalSince1970() {

    auto t1me = time(NULL);

    ///t1me = t1me / (60*60*24*365);

    std::cout << "seconds since epoch: " << t1me << '\n'
              << "minutes since epoch: " << (t1me/60) << '\n'
              << "hours since epoch:   " << (t1me/(60*60)) << '\n'
              << "days since epoch:    " << (t1me/(60*60*24)) << '\n'
              << "years since epoch:   " << (t1me/(60*60*24*365)) << '\n';

    return 0;
}



int Date::day() {

    const std::chrono::time_point now{std::chrono::system_clock::now()};

    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    return static_cast<unsigned>(ymd.day());

}



int Date::month() {
    const std::chrono::time_point now{std::chrono::system_clock::now()};

    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    return static_cast<unsigned>(ymd.month());

}

int Date::year() {

    const std::chrono::time_point now{std::chrono::system_clock::now()};

    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    return static_cast<int>(ymd.year());

}

std::string Date::tClock() {

//    /*std::chrono::hh_mm_ss c{16h + 32min + 10s};
//
//    std::cout << "%R: " << std::format("{:%R}", c) << '\n'
//              << "%T: " << std::format("{:%T}", c) << '\n';*/
//    auto start = std::chrono::system_clock::now();
//    // Some computation here
//    auto end = std::chrono::system_clock::now();
//
//    std::chrono::duration<double> elapsed_seconds = end-start;
//    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
//
//    std::cout << "finished computation at " << std::ctime(&end_time);
//
//    auto const nowClock = std::chrono::system_clock::now();
//
//    //std::string t_Clock = std::chrono::duration<std::common_type_t<Duration::rep, std::chrono::seconds::rep>>;

    return 0;

}