#include "Heure.hpp"
#include <iostream>


bool Heure::checkHour(int h, int m) {
    if (h < 0 || h > 23) return false;
    if (m < 0 || m > 59) return false;
    return true;
}




