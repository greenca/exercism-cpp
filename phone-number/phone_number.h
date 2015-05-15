#ifndef PHONE_NUMBER_H
#define PHONE_NUMBER_H

#include <string>

class phone_number {
  std::string phone_num;
  std::string error_num = "0000000000";
 public:
  phone_number(const std::string&);
  std::string number() const;
  std::string area_code() const;
  std::string to_string() const;
  operator std::string() const { return to_string(); };
};

#endif
