#include "phone_number.h"
#include <cctype>

using namespace std;

phone_number::phone_number(const string& s) {
  phone_num = "";
  for (int i=0; i < s.length(); i++) {
    if (isdigit(s[i])) phone_num += s[i];
  }
  int len = phone_num.length();
  if (len == 11) {
    if (phone_num[0] == '1') {
      phone_num.erase(0,1);
    } else {
      phone_num = error_num;
    }
  } else if ((len > 11) || (len < 10)) {
    phone_num = error_num;
  }
}

string phone_number::number() const {
  return phone_num;
}

string phone_number::area_code() const {
  return phone_num.substr(0,3);
}

string phone_number::to_string() const {
  return "(" + area_code() + ") " + phone_num.substr(3,3) + 
    "-" + phone_num.substr(6,string::npos);
}
