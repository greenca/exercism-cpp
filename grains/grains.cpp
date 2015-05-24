#include "grains.h"
#include <cmath>

namespace grains
{

unsigned long long int square(int num) {
    return pow(2, num-1);
}

unsigned long long int total() {
    unsigned long long int val = 0;
    for (int i=1; i<=64; i++) {
        val += square(i);
    }
    return val;
}

}
