#pragma once
#include <math.h>
#include <cmath>
#ifndef M_PI
#define M_PI          3.14159265f
#endif
#include "vec.h"
const float PI = 3.14159265f;
const float M_2PI = 2 * PI;
const float eps = 1e-6f;

inline bool almostEquals(float f1, float f2, float delta = 0.0001) {
	return fabs(f1 - f2) < delta;
}
inline vec2 solveQuadratic(float a, float b, float c, bool& solvable) {
    float disc = b * b - 4 * a * c;
    solvable = disc >= 0.0;
    if (!solvable) return vec2(0);
    return vec2((-b + sqrt(disc)) / (2 * a), (-b - sqrt(disc)) / (2 * a));
}
