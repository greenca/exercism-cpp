#include "space_age.h"

namespace space_age
{
  space_age::space_age(long seconds) {
    age = seconds;
    years = age/31557600.0;
  }

  long space_age::seconds() const {
    return age;
  }

  float space_age::on_earth() const {
    return years;
  }

  float space_age::on_mercury() const {
    return years/0.2408467;
  }

  float space_age::on_venus() const {
    return years/0.61519726;
  }

  float space_age::on_mars() const {
    return years/1.8808158;
  }

  float space_age::on_jupiter() const {
    return years/11.862615;
  }

  float space_age::on_saturn() const {
    return years/29.447498;
  }

  float space_age::on_uranus() const {
    return years/84.016846;
  }

  float space_age::on_neptune() const {
    return years/164.79132;
  }  

}


