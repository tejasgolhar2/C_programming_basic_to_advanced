#include<stdio.h>

int main()
{
	// Pointer to Pointer
	//   Variable that can store the address of another pointer which may be a value pointer or a pointer to pointer

	int a = 5;
	printf("Address of 'a': %X\n", &a );

	int* m = &a;

	// Referencing
	printf("Address stored in 'm': %X\n", m );  

	// Dereferencing
	printf("Value stored at address in 'm'  is %d\n", *m );  



	// Pointer to Pointer
	// We want to store the adress of a pointer variable into another variable

	int** n = &m;

	// Referencing - 'n' stores address of 'm'
	printf("\nAddress stored in 'n' is %X\n", n);  

	// Dereferencing - value at address stored by 'n' = 'm' = &a
	printf("Value stored at address in 'n'  is %X\n", *n ); 

	// Dereferencing - value at address stored in 'm' = 'a'
	printf("Value stored by double pointer 'n': %d\n", **n);

	return 0;
}