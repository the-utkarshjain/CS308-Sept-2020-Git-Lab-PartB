#include "veclib.h"
#include <math.h>
#include <stdio.h>

float angle(vector vec_a, vector vec_b) {
   float distancea, distanceb;
   distancea =  dotprod(vec_a, vec_a);
   distanceb = dotprod(vec_b, vec_b);
   float dotproduct = dotprod(vec_a, vec_b);
   float ans = acos(dotproduct/sqrt(distancea*distanceb));
   return ans*180/3.14159;
}