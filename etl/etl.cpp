#include "etl.h"
#include <cctype>

namespace etl
{
  using namespace std;

  map<char, int> transform(const map<int, vector<char>>& old_sys) {
    map<char, int> new_sys;
    map<int, vector<char>>::const_iterator it;
    for (it = old_sys.begin(); it != old_sys.end(); it++) {
      int curr_val = it->first;
      vector<char> curr_vec = it->second;
      for (int i = 0; i < curr_vec.size(); i++) {
	new_sys[char(tolower(curr_vec[i]))] = curr_val;
      }
    }
    return new_sys;
  }

}
