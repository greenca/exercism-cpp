#ifndef CLOCK_H
#define CLOCK_H

#include <string>

namespace date_independent
{
  namespace clock
  {
    class time {
      int _hour;
      int _minute;
    public:
      time(int hour, int minute);
      std::string plus(int);
      std::string minus(int);
      std::string str() const;
      operator std::string() const {
	return str();
      }
      friend bool operator==(const time&, const time&);
    };
    time at(int hour, int minute = 0);
    bool operator==(const time&, const time&);
    bool operator!=(const time&, const time&);
  }
}

#endif
