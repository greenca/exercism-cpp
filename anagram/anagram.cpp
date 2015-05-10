#include "anagram.h"
#include <algorithm>

namespace anagram
{
  using namespace std;

  anagram::anagram(const string& s) {
    word = s;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    sorted_word = word;
    sort(sorted_word.begin(), sorted_word.end());
  }

  vector<string> anagram::matches(const vector<string>& candidates) {
    vector<string> correct;
    for (int i=0; i<candidates.size(); i++) {
      if (isAnagram(candidates[i])) {
	correct.push_back(candidates[i]);
      }
    }
    return correct;
  }

  bool anagram::isAnagram(string candidate) {
    transform(candidate.begin(), candidate.end(), candidate.begin(), ::tolower);
    if (candidate == word) return false;
    sort(candidate.begin(), candidate.end());
    return candidate == sorted_word;
  }

}
