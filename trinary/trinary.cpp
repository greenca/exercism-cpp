#include "trinary.h"
#include <cmath>

namespace trinary
{
int to_decimal(const std::string& t) {
    int decimal = 0;
    int i = 0;
    for (std::string::const_reverse_iterator rit = t.crbegin(); rit != t.crend(); ++rit) {
        if (*rit == '1') {
            decimal += pow(3, i);
        } else if (*rit == '2') {
            decimal += 2*pow(3, i);
        } else if (*rit != '0') {
            return 0;
        }
        i++;
    }
    return decimal;
}
}
