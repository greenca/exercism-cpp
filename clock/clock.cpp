#include "clock.h"

#include <sstream>

namespace date_independent
{
namespace clock
{
  time::time(int hour, int minute) {
    _hour = hour;
    _minute = minute;
  }

  std::string time::plus(int minutes) {
    int newmin = _minute + minutes;
    int houradjust = newmin/60;
    _minute = newmin % 60;      
    if (_minute < 0) {
      _minute += 60;
      houradjust -= 1;
    }
    _hour = (_hour + houradjust) % 24;
    if (_hour < 0) {
      _hour += 24;
    }
    return str();
  }

  std::string time::minus(int minutes) {
    return plus(-minutes);
  }
  
  std::string time::str() const {
    std::stringstream sstm;
    if (_hour < 10) {
      sstm << 0;
    }
    sstm << _hour << ":";
    if (_minute < 10) {
      sstm << 0;
    }
    sstm << _minute;
    return sstm.str();
  }

  time at(int hour, int minute) {
    return time(hour, minute);
  }

  bool operator==(const time& t1, const time& t2) {
    return ((t1._hour == t2._hour) && (t1._minute == t2._minute));
  }

  bool operator!=(const time& t1, const time& t2) {
    return ~(t1 == t2);
  }

}
}
