#ifndef NUCLEOTIDE_COUNT_H
#define NUCLEOTIDE_COUNT_H

#include <string>
#include <map>

namespace dna
{
  class counter {
    std::string dna_string;
  public:
    counter(const std::string&);
    std::map<char, int> nucleotide_counts() const;
    int count(char) const;
  };
}

#endif
