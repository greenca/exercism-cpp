#ifndef BEER_SONG_H
#define BEER_SONG_H

#include <string>

namespace beer
{
  std::string verse(int num);
  std::string sing(int first, int last = 0);
}

#endif
