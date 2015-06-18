#include "meetup.h"

namespace meetup
{
scheduler::scheduler(short unsigned int month, short unsigned int year) {
    meet_month = month;
    meet_year = year;
}
boost::gregorian::date scheduler::getDay(int day, short unsigned int first) const {
    boost::gregorian::date first_day{meet_year, meet_month, first};
    int week_day = first_day.day_of_week();
    int diff = day - week_day;
    if (diff < 0) diff += 7;
    return first_day + boost::gregorian::date_duration(diff);
}

boost::gregorian::date scheduler::last(int day) const {
    boost::gregorian::date fourth_day = fourth(day);
    boost::gregorian::date fifth_day = fourth_day + boost::gregorian::date_duration(7);
    if (fifth_day.month() == meet_month) {
        return fifth_day;
    } else {
        return fourth_day;
    }
}

}
