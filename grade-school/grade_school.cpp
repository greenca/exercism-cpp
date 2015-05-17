#include "grade_school.h"
#include <algorithm>

namespace grade_school
{
  using namespace std;

  map<int, vector<string>> school::roster() {
    return students;
  }

  void school::add(const string& name, int grade) {
    students[grade].push_back(name);
    sort(students[grade].begin(), students[grade].end());
  }

  vector<string> school::grade(int grade) {
    return students[grade];
  }
}
