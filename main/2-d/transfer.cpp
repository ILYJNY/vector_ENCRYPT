//
// Created by Backup on 2024-03-23.
//
#include "vector_sources.h"
#include "cmath"


vectors_polar transfer_o2p(vectors_orthogonal vectorsOrthogonal) {
    long double x = vectorsOrthogonal.x;
    long double y = vectorsOrthogonal.y;
    long double radius = sqrtl(powl(x, 2) + pow(y, 2));
    long double seta = atanl(y/x);
    vectors_polar result = {seta, radius};
    return result;

}

vectors_orthogonal transfer_p2o(vectors_polar vectorsPolar) {
    long double seta = vectorsPolar.seta;
    long double radius = vectorsPolar.radius;
    long double x = radius * cosl(seta);
    long double y = radius * sinl(seta);
    vectors_orthogonal result = {x, y};
    return result;
}