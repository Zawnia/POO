#include "Heure.hpp"
#include <iostream>


bool Heure::checkHour(int h, int m) {
    if (h < 0 || h > 23) return false;
    if (m < 0 || m > 59) return false;
    return true;
}

Heure::Heure(int h, int m) {
    if (checkHour(h, m)) {
        heure = h; minute = m;
    } else {
        heure = 0; minute = 0;
    }
}

Heure::Heure() {
    heure = 0;
    minute = 0;
}

void Heure::affiche() {
    std::cout << heure << "h" << minute << std::endl;
}

void Heure::setHeure(int h) {
    if (checkHour(h, minute)) {
        heure = h;
    }
}

void Heure::setMinute(int a) {
    if (checkHour(heure, a)) {
        minute = a;
    }
}

int Heure::getHeure() {
    return heure;
}

int Heure::getMinute() {
    return minute;
}







