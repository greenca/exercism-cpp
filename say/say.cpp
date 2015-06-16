#include "say.h"
#include <map>
#include <stdexcept>

namespace say
{
const std::map<int, std::string> numbers {
    {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"},
    {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"},
    {8, "eight"}, {9, "nine"}, {10, "ten"}, {11, "eleven"},
    {12, "twelve"}, {13, "thirteen"}, {14, "fourteen"},
    {15, "fifteen"}, {16, "sixteen"}, {17, "seventeen"},
    {18, "eighteen"}, {19, "ninteen"}, {20, "twenty"},
    {30, "thirty"}, {40, "forty"}, {50, "fifty"},
    {60, "sixty"}, {70, "seventy"}, {80, "eighty"},
    {90, "ninety"}
};

std::string in_english(unsigned long long int n) {
    std::string result;

    if ((n < 0) || (n > 999999999999)) {
        throw std::domain_error("invalid number");
    }

    int billions = n/1000000000;
    n %= 1000000000;
    if (billions > 0) {
        result += in_english(billions) + " billion";
        if (n != 0) {
            result += " ";
        }
    }

    int millions = n/1000000;
    n %= 1000000;
    if (millions > 0) {
        result += in_english(millions) + " million";
        if (n != 0) {
            result += " ";
        }
    }

    int thousands = n/1000;
    n %= 1000;
    if (thousands > 0) {
        result += in_english(thousands) + " thousand";
        if (n != 0) {
            result += " ";
        }
    }

    int hundreds = n/100;
    n %= 100;
    if (hundreds > 0) {
        result += numbers.at(hundreds) + " hundred";
        if (n != 0) {
            result += " ";
        }
    }

    int tens = n/10;
    if (tens > 1) {
        n -= 10*tens;
    }
    if (tens > 1) {
        result += numbers.at(10*tens);
        if (n != 0) {
            result += "-";
        }
    }

    if ((n != 0) || (result == "")) {
        result += numbers.at(n);
    }

    return result;
}
}
