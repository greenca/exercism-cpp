#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace triangle
{
const int illegal = -1;
const int equilateral = 0;
const int isosceles = 1;
const int scalene = 2;

int kind(float, float, float);
}

#endif
