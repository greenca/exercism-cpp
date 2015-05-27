#include "gigasecond.h"
#include <cmath>

namespace gigasecond
{
  using namespace boost::gregorian;

  date advance(date birthday) {
    long numDays = pow(10, 9)/(60*60*24);
    date_duration dd(numDays);
    return birthday + dd;
  }

}
