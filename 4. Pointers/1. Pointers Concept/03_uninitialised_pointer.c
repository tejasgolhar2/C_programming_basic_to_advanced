#include<stdio.h>

int main()
{
    int *a;				// UNINITIALISED POINTER

    // PREVENTION 1 - ACCESS VALUE

//    int b = *a; 

    // PREVENTION 2 - UPDATE VALUE

   *a = 15;				//	SEGMENTATION FAULT    ->      When program tried to access illegal memory location

	return 0;
}

//	THE POINTER HERE IS WILD
