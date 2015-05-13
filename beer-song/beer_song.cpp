#include "beer_song.h"
#include <sstream>

namespace beer
{
  using namespace std;

  string verse(int num) {
    stringstream sstm;
    if (num > 0) sstm << num;
    else sstm << "No more";
    if (num == 1) sstm << " bottle";
    else sstm << " bottles";
    sstm << " of beer on the wall, ";
    if (num > 0) sstm << num;
    else sstm << "no more";
    if (num == 1) sstm << " bottle";
    else sstm << " bottles";
    sstm << " of beer.\n";
    if (num > 0) {
      sstm << "Take ";
      if (num > 1) sstm << "one";
      else sstm << "it"; 
      sstm <<" down and pass it around, ";
    } else {
      sstm << "Go to the store and buy some more, ";
    }
    if (num == 0) sstm << 99;
    else if (num == 1) sstm << "no more";
    else sstm << num-1;
    if (num == 2) sstm << " bottle";
    else sstm << " bottles";
    sstm << " of beer on the wall.\n";
    return sstm.str();
  }

  string sing(int first, int last) {
    string output = "";
    for (int i=first; i>=last; i--) {
      output += verse(i);
      if (i > last) output += "\n";
    }
    return output;
  }

  string sing(int first) {
    return sing(first, 0);
  }

}
