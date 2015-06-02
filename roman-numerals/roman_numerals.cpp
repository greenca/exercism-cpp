#include "roman_numerals.h"

namespace roman
{
std::string convert(int n) {
    std::string result = "";
    result += convertDigit(n/1000, 'M', 'M', 'M');
    n %= 1000;
    result += convertDigit(n/100, 'C', 'D', 'M');
    n %= 100;
    result += convertDigit(n/10, 'X', 'L', 'C');
    n %= 10;
    result += convertDigit(n, 'I', 'V', 'X');
    return result;
}
std::string convertDigit(int d, char ones, char fives, char tens) {
    if (d <= 3) {
        return std::string(d, ones);
    } else if (d == 4) {
        return std::string(1, ones) + std::string(1, fives);
    } else if (d <= 8) {
        return std::string(1, fives) + std::string(d-5, ones);
    } else {
        return std::string(10-d, ones) + std::string(1, tens);
    }
}
}
