#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[5] = {4,84,68,986,7};

	int* p = &arr[0];
	printf("Value at p: %d\n", *p);

	int*q = &arr[2];
	printf("Value at q: %d\n", *q);

	int d = q - p;   				// 	Subtracting Pointer address from another pointer address
	printf("Value of d : %d\n", d);

	q = q - 2;						//  Subtracting Integer value from the pointer address
	printf("Value at q : %d", *q);

	return 0;
}



/*
NOTE: 

1. Difference between two pointer addresses -->>  Number of integers present in between the address

2. Subtracting an integer value from the pointer address  -->> Point to a new address with digits shift equal to the integer value

*/