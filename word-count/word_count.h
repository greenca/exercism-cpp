#ifndef WORD_COUNT_H
#define WORD_COUNT_H

#include <string>
#include <map>
#include <iostream>
#include <cctype>

using namespace std;

namespace word_count 
{
  map<string, int> words(string words) 
  {
    map<string, int> wordcounts;
    string s = words;
    string word;
    string::size_type n;
    
    while (!s.empty()) {

      // Pop first word
      n = s.find_first_of(" ,\n");
      if (n == string::npos) {
	word = s;
	s = "";
      } else {
	word = s.substr(0,n);
	s = s.substr(n+1);
      }

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

      // Don't add empty words
      if (word.empty()) {
	continue;
      }
      
      // Add or increment word count
      if (wordcounts.find(word) == wordcounts.end()) {
	wordcounts[word] = 1;
      } else {
	wordcounts[word]++;
      }

    }

    return wordcounts;
  }
}

#endif
