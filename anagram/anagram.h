#ifndef ANAGRAM_H
#define ANAGRAM_H

#include <string>
#include <vector>

namespace anagram
{
  class anagram {
    std::string word;
    std::string sorted_word;
  public:
    anagram(const std::string&);
    std::vector<std::string> matches(const std::vector<std::string>&);
    bool isAnagram(std::string);
  };
}

#endif
