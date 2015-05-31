#include "raindrops.h"

namespace raindrops
{
  std::string convert(int num) {
    std::set<int> factors = primeFactors(num);
    std::string result = "";
    if (factors.count(3) != 0) {
      result += "Pling";
    }
    if (factors.count(5) != 0) {
      result += "Plang";
    }
    if (factors.count(7) != 0) {
      result += "Plong";
    }
    if (result == "") {
      result = std::to_string(num);
    }
    return result;
  }

  std::set<int> primeFactors(int num) {
    std::set<int> factors;
    int fac = 2;
    while (num > 1) {
      if (num % fac == 0) {
	factors.insert(fac);
	num /= fac;
      } else {
	fac++;
      }
    }
    return factors;
  }

}
