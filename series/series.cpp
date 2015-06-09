#include "series.h"
#include <stdexcept>

namespace series
{
std::vector<int> digits(const std::string& s) {
    std::vector<int> result;
    for (int i = 0; i < s.length(); i++) {
        result.push_back(s[i] - '0');
    }
    return result;
}

std::vector<std::vector<int>> slice(const std::string& s, int n) {

    if (n > s.length()) {
        throw std::domain_error("Slice length is larger than string");
    }

    std::vector<int> d = digits(s);
    std::vector<std::vector<int>> result;

    for (int i = 0; i <= d.size() - n; i++) {
        std::vector<int> slice;

        for (int j = 0; j < n; j++) {
            slice.push_back(d[i+j]);
        }

        result.push_back(slice);
    }

    return result;
}
}
