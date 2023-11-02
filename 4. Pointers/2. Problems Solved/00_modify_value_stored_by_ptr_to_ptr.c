#include<stdio.h>

int main()
{
	int a = 50;

	int* add = &a;
	int** add2 = &add;

	printf("The value present at end address of 'add2' is %d\n", **add2 );
	printf("The address of 'add2' is %X\n", add2 );

	// Dereferencing Pointer to POinter
	**add2 = 101;

	printf("The modified value present at end address of 'add2' is %d\n", **add2 );
	return 0;
}