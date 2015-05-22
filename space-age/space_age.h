#ifndef SPACE_AGE_H
#define SPACE_AGE_H

namespace space_age
{
  class space_age {
    long age;
  public:
    space_age(long);
    long seconds() const;
    float on_earth() const;
    float on_mercury() const;
    float on_venus() const;
    float on_mars() const;
    float on_jupiter() const;
    float on_saturn() const;
    float on_uranus() const;
    float on_neptune() const;
  };
}

#endif
