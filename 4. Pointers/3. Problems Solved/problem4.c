//	Access array element using	- POINTER TO ENTIRE ARRAY

#include<stdio.h>

int main()
{
	int array[5] = {1,2,3};

	int (*p) [5] = &array;		//	dereference the inward pointer to point to a grouped structure outside

	
	// PRINT 2ND ELEMENT

	printf("%d\n", **p+1);
	

	return 0;
}