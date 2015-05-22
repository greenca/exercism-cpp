#include "hamming.h"

#include <string>
#include <stdexcept>

namespace hamming
{
  size_t compute(const std::string& strand1, const std::string& strand2)
  {
    int count = 0;
    if (strand1.length() != strand2.length()) {
      throw std::domain_error("strand lengths not equal");
    }
    for (size_t i=0; i<strand1.length(); i++) {
      if (strand1[i] != strand2[i]) {
	count++;
      }
    }
    return count;
  }
}
