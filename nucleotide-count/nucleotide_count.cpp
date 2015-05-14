#include "nucleotide_count.h"

namespace dna
{
  using namespace std;

  counter::counter(const string& s) {
    dna_string = s;
  }

  map<char, int> counter::nucleotide_counts() const {
    map<char, int> counts = {{'A', 0}, {'T', 0}, {'C', 0}, {'G', 0}};
    for (int i=0; i < dna_string.length(); i++) {
      char cur_char = dna_string[i];
      counts[cur_char]++;
    }
    return counts;
  }

  int counter::count(char c) const {
    string valid = "ACGT";
    if (valid.find(c) == string::npos) {
      throw invalid_argument("Not a valid nucleotide");
    }
    int c_count = 0;
    for (int i=0; i < dna_string.length(); i++) {
      if (dna_string[i] == c) {
	c_count++;
      }
    }
    return c_count;
  }
}
