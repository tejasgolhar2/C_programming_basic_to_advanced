#include<stdio.h>

int main()
{
	int* p = NULL;		// Declaring a Null Pointer

	printf("Address at p : %x", p);		// Results Zero

	//printf("Value at p : %d", *p);		// Not point to any valid object
	
	return 0;
}
/*

Null Pointer
		An unintialized pointer on dereferencing may result a garbage value or show undefined behavior
	To prevent this, the declared pointer is assigned a value "NULL" or 0.
	
It doesnt point to any valid object

It cannot be dereferenced

Need to be checked whether the Pointer is null or not

Use Case:
    1. Pointer for Dynamic Memory allocation
    2. Error handling - Better to have a NUll than a ghost dereferenced value

*/
