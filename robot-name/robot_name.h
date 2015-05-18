#ifndef ROBOT_NAME_H
#define ROBOT_NAME_H

#include <string>

namespace robot_name
{
  class robot {
    std::string _name;
  public:
    robot();
    std::string name() const;
    void reset();
  };
}

#endif
