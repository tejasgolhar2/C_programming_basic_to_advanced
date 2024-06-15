#include<stdio.h>

int main()
{
	int a = 50;

	int* add = &a;
	int** add2 = &add;

	printf("Value at 'add' is %d\n", *add );    	// Dereferencing
	printf("Value at 'add2' is %d\n", **add2 );

	printf("Address in 'add' is %X\n", add );		// Referencing
	printf("Address in 'add2' is %X\n", add2 );

	
	**add2 = 101;									// Dereferencing Pointer to POinter

	printf("\nValue at 'add2' is %d\n", **add2 );
	return 0;
}