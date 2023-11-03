#include<stdio.h>

int main()
{
	int a = 50;

	int* add = &a;
	int** add2 = &add;
	printf("The value at 'add' is %d\n", *add );
	printf("The value at 'add2' is %d\n", **add2 );
	printf("The address in 'add' is %X\n", add );
	printf("The address in 'add2' is %X\n", add2 );

	// Dereferencing Pointer to POinter
	**add2 = 101;

	printf("\nThe modified value at 'add2' is %d\n", **add2 );
	return 0;
}