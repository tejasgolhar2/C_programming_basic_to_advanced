#include<stdio.h>

int main()
{
	// Pointer to Pointer
	//   Its a variable capable of string the address of another pointer which may be a value pointer or a pointer to pointer

	int a = 5;
	printf("The address of 'a' in memory %X\n", &a );

	int* add = &a;

	// Referencing
	printf("The address stored by the pointer variable 'add' is %X\n", add );  

	// Dereferencing
	printf("The value stored at the address stored by the pointer is %d\n", *add );  



	// Pointer to Pointer
	// I want to store the adress of a pointer variable into another variable

	int** add2 = &add;

	// Referencing -- Directing to the address where another address is stored
	printf("The address of the Variable Pointer 'add' is %X and %X\n", &add, add2 );  

	// Dereferencing -- Getting the value stored at the address stored by Pointer to POinter Variable
	printf("The value present at the address stored by pointer to pointer variable is %d\n", **add2 );

	return 0;
}