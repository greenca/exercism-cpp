#ifndef WORD_COUNT_H
#define WORD_COUNT_H

#include <string>
#include <map>

namespace word_count 
{
std::map<std::string, int> words(const std::string& words);
std::string popWord(std::string& words);
void normalizeWord(std::string& word);
void countWord(std::map<std::string, int>& wordcounts, std::string& word);
}

#endif
