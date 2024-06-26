

#include<stdio.h>

int main()
{
	
	//	Pointer to First Array Element

	int a1[5] = {0};

	int *p = a1;				// p is a pointer to base address of the array	-> 	1st array element

	printf("%p\n", p);



	//	Pointer to an Entire Array

	int (*q) [5] = &a1;			// q is an integer pointer to 5 elements		-> 	Entire array

	printf("%p\n", q);

	return 0;
}

//	Reference:

//		For a 2D array-->		
//				array_name 		= 	Pointer to first 1D array
//			( * array_name )	= 	Pointer to first element of first 1D Array
//		  & ( * array_name ) 	= 	Pointer to first 1D array

//	Here, '&'	->>   is used to dereference the inward pointer to point to a grouped structure outside