#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "quadSolver.h"
#include "input.h"
#include "discriminant.h"
#include "root.h"
#include "output.h"
//#include "mock_functions.h"


double quadSolver(void) {

	float* aPtr = malloc(sizeof(float));
	float* bPtr = malloc(sizeof(float));
	float* cPtr = malloc(sizeof(float)); //if i initialize to 0, error
	input(aPtr, bPtr, cPtr);
	assert(aPtr);
	assert(bPtr);
	assert(cPtr); //make sure no null pointers
	
	//mock_input();
	double discr = discriminant(*aPtr, *bPtr, *cPtr);
	//mock_discriminant();
	
	double r = root(discr);
	//mock_root();

	float a = *aPtr;
	float b = *bPtr;
	float c = *cPtr;
	
	output(a, b, c, r);
	

}
