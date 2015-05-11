#include "food_chain.h"

namespace food_chain 
{
  using namespace std;
  
  string first_line = "I know an old lady who swallowed a ";

  string animals [7] = {"fly.\n", 
			"spider.\nIt wriggled and jiggled and tickled inside her.\n",
			"bird.\nHow absurd to swallow a bird!\n",
			"cat.\nImagine that, to swallow a cat!\n",
			"dog.\nWhat a hog, to swallow a dog!\n",
			"goat.\nJust opened her throat and swallowed a goat!\n",
			"cow.\nI don't know how she swallowed a cow!\n"};

  string lines [7] = {"I don't know why she swallowed the fly. Perhaps she'll die.\n",
		      "She swallowed the spider to catch the fly.\n",
		      "She swallowed the bird to catch the spider that wriggled and jiggled and tickled inside her.\n",
		      "She swallowed the cat to catch the bird.\n",
		      "She swallowed the dog to catch the cat.\n",
		      "She swallowed the goat to catch the dog.\n",
		      "She swallowed the cow to catch the goat.\n"};

  string last_verse = "I know an old lady who swallowed a horse.\nShe's dead, of course!\n";

  string verse(int num) {
    if (num >= 8) return last_verse;
    string output = first_line + animals[num-1];
    for (int i=num-1; i>=0; i--) {
      output += lines[i];
    }
    return output;
  }

  string verses(int first, int last) {
    string output = "";
    for (int i=first; i<=last; i++) {
      output += verse(i) + "\n";
    }
    return output;
  }

  string sing() {
    return verses(1, 8);
  }
}
