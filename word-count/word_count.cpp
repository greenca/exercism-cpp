#include "word_count.h"
#include <cctype>

namespace word_count
{
  using namespace std;

  map<string, int> words(const string& words) 
  {
    map<string, int> wordcounts;
    string s = words;
    string word;
    
    while (!s.empty()) {
      word = popWord(s);
      normalizeWord(word);
      countWord(wordcounts, word);
    }

    return wordcounts;
  }

  string popWord(string& s)
  {
    string word;
    string::size_type n;
    n = s.find_first_of(" ,\n");
    if (n == string::npos) {
      word = s;
      s = "";
    } else {
      word = s.substr(0,n);
      s = s.substr(n+1);
    }
    return word;
  }

  void normalizeWord(string& word)
  {
    // Normalize case, delete punctuation
    int i = 0;
    while (i < word.length()) {
      word[i] = tolower(word[i]);
      if (ispunct(word[i]) && (word[i] != '\'')) {
	word.erase(i,1);
      } else if ((word[i] == '\'') && ((i == 0) || (i == word.length()-1))) {
	word.erase(i,1);
      } else {
	i++;
      }
    }
  }

  void countWord(map<string, int>& wordcounts, string& word)
  {
    // Add or increment word count
    if (!word.empty()) {
      if (wordcounts.find(word) == wordcounts.end()) {
	wordcounts[word] = 1;
      } else {
	wordcounts[word]++;
      }
    }
  }

}
