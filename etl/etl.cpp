#include "etl.h"
#include <cctype>

namespace etl
{
  using namespace std;

  map<char, int> transform(map<int, vector<char>> old_sys) {
    map<char, int> new_sys;
    map<int, vector<char>>::const_iterator it;
    int curr_val;
    vector<char> curr_vec;
    for (it = old_sys.begin(); it != old_sys.end(); it++) {
      curr_val = it->first;
      curr_vec = it->second;
      for (int i = 0; i < curr_vec.size(); i++) {
	new_sys[char(tolower(curr_vec[i]))] = curr_val;
      }
    }
    return new_sys;
  }

}
