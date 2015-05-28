#include "beer_song.h"
#include <sstream>

namespace beer
{
  using std::string;
  using std::stringstream;

  string verse(int num) {
    stringstream sstm;
    if (num > 0) {
      string btlString;
      string tkString;
      if (num == 1) { 
	btlString = " bottle";
	tkString = "it";
      } else {
	btlString = " bottles";
	tkString = "one";
      }
      sstm << num << btlString << " of beer on the wall, ";
      sstm << num << btlString << " of beer.\n";
      sstm << "Take " << tkString << " down and pass it around, ";
    } else {
      sstm << "No more bottles of beer on the wall, ";
      sstm << "no more bottles of beer.\n";
      sstm << "Go to the store and buy some more, ";
    }
    int remaining = num-1;
    if (remaining < 0) remaining = 99;
    if (remaining > 0) {
      string btlString;
      if (remaining == 1) {
	btlString = " bottle";
      } else {
	btlString = " bottles";
      }
      sstm << remaining << btlString << " of beer on the wall.\n";
    } else {
      sstm << "no more bottles of beer on the wall.\n";
    }
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

}
