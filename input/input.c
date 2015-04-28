#include <stdio.h>
#include <stdlib.h>
#include "input.h"

int input(float* aPtr, float* bPtr, float* cPtr){ //these pointers are passed from the calling function to pass input back

  

  printf("Enter the parameter a	");
   
  scanf("%f", aPtr);

  printf("Enter the parameter b	");
  
  scanf("%f", bPtr);

  printf("Enter the parameters c  ");
  
  scanf("%f", cPtr);


  return 0;
}
