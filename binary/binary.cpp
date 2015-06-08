#include "binary.h"
#include <cmath>

namespace binary
{
int convert(std::string bin) {
    int result = 0;
    int i = 0;
    for (std::string::reverse_iterator rit=bin.rbegin(); rit!=bin.rend(); ++rit) {
        if (*rit == '1') {
            result += std::pow(2, i);
        } else if (*rit != '0') {
            return 0;
        }
        i++;
    }
    return result;
}
}
