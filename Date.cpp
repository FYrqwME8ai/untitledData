#include "Date.h"

#include <algorithm>
#include <ctime>
#include <sstream>
#include <iomanip>

Date::Date() {
    now = std::chrono::system_clock::now();
};

Date::Date(long long value){
    now = std::chrono::system_clock::from_time_t (value);
}

int Date::timeIntervalSince1970() {

    return std::chrono::system_clock::to_time_t(now);
}

int Date::day() {
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    return static_cast<unsigned>(ymd.day());
}

int Date::month() {
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    return static_cast<unsigned>(ymd.month());
}

int Date::year() {
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    return static_cast<int>(ymd.year());
}

std::string Date::getClock() {
    auto timer = std::chrono::system_clock::to_time_t(now);
    std::tm bt = *std::localtime(&timer);

    std::ostringstream oss;
    oss << std::put_time(&bt, "%H:%M:%S"); // HH:MM:SS

    return oss.str();
}