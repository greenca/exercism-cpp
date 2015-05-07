#ifndef BOB_H
#define BOB_H

#include <string>
#include <iostream>
#include <ctype.h>

using namespace std;
namespace bob
{
  string hey(string s)
  {
    bool allUpper = true;
    bool hasLetters = false;
    for (unsigned int i = 0; i < s.length(); i++) {
      if (islower(s.at(i))) {
	allUpper = false;
      }
      if (isalpha(s.at(i))) {
	hasLetters = true;
      }
    }
    if (allUpper && hasLetters) {
      return "Whoa, chill out!";
    }
    if (s.find_last_not_of(" \n\t\r") == string::npos) {
      return "Fine. Be that way!";
    }
    if (s.at(s.find_last_not_of(" \n\t\r")) == '?') {
      return "Sure.";
    }
    return "Whatever.";
  }
}

#endif
