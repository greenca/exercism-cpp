#include "robot_name.h"
#include <cstdlib>
#include <sstream>

namespace robot_name
{
  robot::robot() {
    reset();
  }

  std::string robot::name() const {
    return _name;
  }

  void robot::reset() {
    std::stringstream sstm;
    for (int i=0; i<2; i++) {
      sstm << char('A' + rand() % 26);
    }
    for (int i=0; i<3; i++) {
      sstm << rand() % 10;
    }
    _name = sstm.str();
  }
}
