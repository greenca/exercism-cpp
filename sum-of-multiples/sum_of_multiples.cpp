#include "sum_of_multiples.h"

namespace sum_of_multiples
{
int to(int n) {
    return to({3, 5}, n);
}

int to(std::vector<int> mults, int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (std::vector<int>::iterator it = mults.begin(); it != mults.end(); ++it) {
            if (i % *it == 0) {
		result += i;
                break;
            }
        }
    }
    return result;
}
}
