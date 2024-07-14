#include<stdio.h>

int main()
{
    int *a;				//   UNINITIALISED POINTER

     
//    int b = *a;       //  Prevent Accessing Value

   

   *a = 15;				//  Prevent Updating Value
                        //	SEGMENTATION FAULT    ->      Program tried to access illegal memory location

	return 0;
}

//	THE POINTER HERE IS WILD
