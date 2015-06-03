#include "nth_prime.h"
#include <vector>
#include <stdexcept>

namespace prime
{
int nth(int n) {
    if (n <= 0) {
        throw std::domain_error("n must be greater than zero");
    }
    std::vector<int> primes;
    int curr_target = 2;
    while (primes.size() < n) {
        bool isPrime = true;
        for (std::vector<int>::iterator it = primes.begin();
                it != primes.end(); ++it) {
            if (curr_target % *it == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes.push_back(curr_target);
        }
        curr_target++;
    }
    return primes.back();
}
}
