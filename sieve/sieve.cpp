#include "sieve.h"

namespace sieve
{
std::vector<int> primes(int limit) {
    std::vector<int> result;
    for (int i=2; i<=limit; i++) {
        result.push_back(i);
    }
    for (std::vector<int>::iterator it=result.begin(); it<result.end(); ++it) {
        for (std::vector<int>::iterator it2=it+1; it2<result.end(); ++it2) {
            if (*it2 % *it == 0) {
                result.erase(it2);
            }
        }
    }
    return result;
}
}

