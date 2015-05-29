#include "triangle.h"

#include <stdexcept>
#include <algorithm>

namespace triangle
{
int kind(float side1, float side2, float side3) {

    // Check for no size
    if ((side1 == 0) && (side2 == 0) || (side3 == 0)) {
        throw std::domain_error("Triangle has no size");
    }

    // Check for negative sides
    if ((side1 < 0) || (side2 < 0) || (side3 < 0)) {
        return illegal;
    }

    // Check triangle equality
    float max_side = std::max({side1, side2, side3});
    if (max_side >= side1 + side2 + side3 - max_side) {
        return illegal;
    }

    // Determine triangle type
    if ((side1 == side2) && (side2 == side3)) {
        return equilateral;
    } else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
        return isosceles;
    } else {
        return scalene;
    }

}
}
