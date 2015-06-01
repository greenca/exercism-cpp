#include "difference_of_squares.h"
#include <cmath>

namespace squares
{
int square_of_sums(int n) {
    int sum = 0;
    for (int i=0; i<=n; i++) {
        sum += i;
    }
    return std::pow(sum, 2);
}

int sum_of_squares(int n) {
    int sum = 0;
    for (int i=0; i<=n; i++) {
        sum += std::pow(i, 2);
    }
    return sum;
}

int difference(int n) {
    return square_of_sums(n) - sum_of_squares(n);
}
}
