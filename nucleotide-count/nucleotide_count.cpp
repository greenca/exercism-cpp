#include "nucleotide_count.h"

#include <iostream>

namespace dna
{
using namespace std;

counter::counter(const string& s) {
    counts = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};
    for (int i=0; i < s.length(); i++) {
        char cur_char = s[i];
        counts[cur_char]++;
    }
}

int counter::count(char c) const {
    auto it = counts.find(c);
    if (it == counts.end()) {
        throw invalid_argument("Not a valid nucleotide");
    }
    return counts.at(c);
}
}
