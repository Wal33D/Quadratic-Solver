#include <stdio.h>
#include <math.h>
#include "discriminant.h"

double discriminant(float a, float b, float c){

  double discr =  b * b - 4 * a * c; //returns a double to account for rounding errors in the range of float

  return discr;

  } 

 
