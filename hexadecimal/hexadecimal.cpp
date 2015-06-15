#include "hexadecimal.h"
#include <cctype>
#include <cmath>

namespace hexadecimal
{
int convert(const std::string& hex) {
    int dec = 0;
    int i = 0;
    for (auto it = hex.rbegin(); it != hex.rend(); ++it) {
        char c = *it;
        if (isdigit(c)) {
            dec += pow(16, i)*(c - '0');
        } else if ((isalpha(c)) && ((tolower(c) - 'a') < 6)) {
            dec += pow(16, i)*(tolower(c) - 'a' + 10);
        } else {
            return 0;
        }
        i++;
    }
    return dec;
}
}
