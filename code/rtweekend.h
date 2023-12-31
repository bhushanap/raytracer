#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;


const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14152926;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180;
}

inline double random_double() {
    // Returns a random real in [0,1).
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max).
    return min + (max-min)*random_double();
}

#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif