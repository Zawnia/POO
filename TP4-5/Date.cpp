#include "Date.hpp"
#include <iostream>

bool Date::checkDate(int j, int m, int a) {
    if (j < 1 || j > 31) return false;
    if (m < 1 || m > 12) return false;
    if (a < 2000 || a > 2050) return false;
    return true;
}

Date::Date(int j, int m, int a) {
    if (checkDate(j, m, a)) {
        day = j; month = m; year = a;
    } else {
        day = 1; month = 1; year = 2000;
    }
}

Date::Date() {
    day = 1;
    month = 1;
    year = 2000;
}

void Date::affiche() {
    std::cout << day << "/" << month << "/" << year << std::endl;
}


/* Getters et Setters*/
void Date::setDay(int j) {
    if (checkDate(j, month, year)) {
        day = j;
    }
}

void Date::setMonth(int m) {
    if (checkDate(day, m, year)) {
        month = m;
    }
}

void Date::setYear(int a) {
    if (checkDate(day, month, a)) {
        year = a;
    }
}

int Date::getDay() {
    return day;
}

int Date::getMonth() {
    return month;
}

int Date::getYear() {
    return year;
}
