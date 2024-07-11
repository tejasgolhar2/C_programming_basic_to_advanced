

#include<stdio.h>

int main()
{

	int a1[5] = { 5, 4, 3, 2, 1};

	int (*q) [5] = &a1;			// q is a pointer to 5 elements		-> 	Entire array

	printf("%p\n", q);
	printf("%d\n", *(*q));

	return 0;
}

//	Reference:

//		For a 2D array-->		
//				array_name 		= 	Pointer to first 1D array
//			( * array_name )	= 	Pointer to first element of first 1D Array
//		  & ( * array_name ) 	= 	Pointer to first 1D array

//	Here, '&'	->>   is used to dereference the inward pointer to point to a grouped structure outside