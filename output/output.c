#include <stdio.h>
#include <stdlib.h>
#include "output.h"
#include <math.h>


void output(float a, float b, float c, double r) {

	double sol1;
	double sol2;

	if (r == 0) {
		
		double numerator = (-1) * (b); //negates b
		double denominator = 2 * (a); //2a
		 
		sol1 = numerator / denominator;
		printf("The equation has one solution = %lf", sol1);
	}
	
	else {
		double numerator1 = (-1) * (b) + r;
		double numerator2 = (-1) * (b) - r;
		double denom = 2 * (a);
		sol1 = numerator1 / denom;
		sol2 = numerator2 / denom;

		if(isnan(r)) {
			printf("The solutions are complex.. further support may be added in a later version\n");
		}
		else 
		printf("The equation has two solutions\n solution a = %lf\n solution b = %lf\n", sol1, sol2);
	}

}
