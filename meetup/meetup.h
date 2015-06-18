#ifndef MEETUP_H
#define MEETUP_H

#include <boost/date_time/gregorian/gregorian.hpp>

namespace meetup
{
  class scheduler {
    short unsigned int meet_month;
    short unsigned int meet_year;
  public:
    scheduler(short unsigned int month, short unsigned int year);
    boost::gregorian::date getDay(int day, short unsigned int first) const;
    boost::gregorian::date last(int day) const;

    boost::gregorian::date teenth(int day) const { return getDay(day, 13); }
    boost::gregorian::date first(int day) const { return getDay(day, 1); }
    boost::gregorian::date second(int day) const { return getDay(day, 8); }
    boost::gregorian::date third(int day) const { return getDay(day, 15); }
    boost::gregorian::date fourth(int day) const { return getDay(day, 22); }

    boost::gregorian::date monteenth() const { return teenth(1); }
    boost::gregorian::date tuesteenth() const { return teenth(2); }
    boost::gregorian::date wednesteenth() const { return teenth(3); }
    boost::gregorian::date thursteenth() const { return teenth(4); }
    boost::gregorian::date friteenth() const { return teenth(5); }
    boost::gregorian::date saturteenth() const { return teenth(6); }
    boost::gregorian::date sunteenth() const { return teenth(0); }

    boost::gregorian::date first_monday() const { return first(1); }
    boost::gregorian::date first_tuesday() const { return first(2); }
    boost::gregorian::date first_wednesday() const { return first(3); }
    boost::gregorian::date first_thursday() const { return first(4); }
    boost::gregorian::date first_friday() const { return first(5); }
    boost::gregorian::date first_saturday() const { return first(6); }
    boost::gregorian::date first_sunday() const { return first(7); }

    boost::gregorian::date second_monday() const { return second(1); }
    boost::gregorian::date second_tuesday() const { return second(2); }
    boost::gregorian::date second_wednesday() const { return second(3); }
    boost::gregorian::date second_thursday() const { return second(4); }
    boost::gregorian::date second_friday() const { return second(5); }
    boost::gregorian::date second_saturday() const { return second(6); }
    boost::gregorian::date second_sunday() const { return second(7); }

    boost::gregorian::date third_monday() const { return third(1); }
    boost::gregorian::date third_tuesday() const { return third(2); }
    boost::gregorian::date third_wednesday() const { return third(3); }
    boost::gregorian::date third_thursday() const { return third(4); }
    boost::gregorian::date third_friday() const { return third(5); }
    boost::gregorian::date third_saturday() const { return third(6); }
    boost::gregorian::date third_sunday() const { return third(7); }

    boost::gregorian::date fourth_monday() const { return fourth(1); }
    boost::gregorian::date fourth_tuesday() const { return fourth(2); }
    boost::gregorian::date fourth_wednesday() const { return fourth(3); }
    boost::gregorian::date fourth_thursday() const { return fourth(4); }
    boost::gregorian::date fourth_friday() const { return fourth(5); }
    boost::gregorian::date fourth_saturday() const { return fourth(6); }
    boost::gregorian::date fourth_sunday() const { return fourth(7); }

    boost::gregorian::date last_monday() const { return last(1); }
    boost::gregorian::date last_tuesday() const { return last(2); }
    boost::gregorian::date last_wednesday() const { return last(3); }
    boost::gregorian::date last_thursday() const { return last(4); }
    boost::gregorian::date last_friday() const { return last(5); }
    boost::gregorian::date last_saturday() const { return last(6); }
    boost::gregorian::date last_sunday() const { return last(7); }
  };
}

#endif
