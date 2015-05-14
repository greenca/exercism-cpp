#include "rna_transcription.h"

namespace transcription
{
  char to_rna(char dna) {
    if (dna == 'G') return 'C';
    if (dna == 'C') return 'G';
    if (dna == 'T') return 'A';
    if (dna == 'A') return 'U';
  }

  std::string to_rna(const std::string& dna) {
    std::string rna = "";
    for (int i = 0; i < dna.length(); i++) {
      rna += to_rna(dna[i]);
    }
    return rna;
  }

}
