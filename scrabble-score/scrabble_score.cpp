#include "scrabble_score.h"
#include <map>
#include <cctype>

namespace scrabble_score
{
const std::map<std::string, int> scores {
    {"aeioulnrst", 1},
    {"dg", 2},
    {"bcmp", 3},
    {"fhvwy", 4},
    {"k", 5},
    {"jx", 8},
    {"qz", 10}
};

int score(std::string word) {
    int result = 0;
    for (int i = 0; i < word.length(); i++) {
        for (auto it = scores.begin(); it != scores.end(); ++it) {
            if ((it->first).find(tolower(word[i])) != std::string::npos) {
                result += it->second;
                break;
            }
        }
    }
    return result;
}
}
