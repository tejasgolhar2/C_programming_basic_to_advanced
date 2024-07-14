#include<stdio.h>

void function(int* ,int* );				// Temporary storage for passed addresses



int main()
{
	int a = 15;
	int b = 16;

	printf("Before: 'a' & 'b' -> %d and %d\n", a, b);

	function(&a, &b);					// Addresses of actual values passed

	printf("After:  'a' & 'b' -> %d and %d\n", a, b);

	return 0;
}


void function(int* m, int* n)			// Pointer Variables to store addresses
{
	*m = 16;							// Change values by dereferencing	
	*n = 15;
}


// Address of values is passed as arguments
// Arguments and Parameters are stored at different memory locations
// 		But, Parameters --> Pointers to Arguments

// Change in Parameters --> Change in Arguments (actual values)  