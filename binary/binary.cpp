#include "binary.h"
#include <cmath>

namespace binary
{
unsigned int convert(const std::string& bin) {
    unsigned int result = 0;
    for (std::string::const_iterator it=bin.cbegin(); it!=bin.cend(); ++it) {
        result *= 2;
        if (*it == '1') {
            result++;
        } else if (*it != '0') {
            return 0;
        }
    }
    return result;
}
}
