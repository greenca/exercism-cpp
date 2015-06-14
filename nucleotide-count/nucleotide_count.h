#ifndef NUCLEOTIDE_COUNT_H
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

namespace dna
{
class counter {
    std::map<char, int> counts;
public:
    counter(const std::string&);
    std::map<char, int> nucleotide_counts() const {
        return counts;
    }
    int count(char) const;
};
}

#endif
