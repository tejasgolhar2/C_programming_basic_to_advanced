#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	// Dangling POinter

	int a = 10;
	int* p = &a;

	printf("Adress at p : %X \n", p);
	printf("Value at p: %d \n", *p);

	free(p);								// Freed the pointer memory location -- MEMORY DEALLOCATION

	p = NULL;
	
	printf("Address at p: %X \n", p );
	return 0;;
}


/*

At Line 15: Pointer is pointing to a non-existing memory location
			Hence, Its a dangling pointer.
			Try to accessing the pointer content which results -->> Segmentation Error

At Line 17: Pointer is assigned a NULL value that doesn't points to any valid - object
			The NULL Pointer is valid and is the valid solution for Dangling Pointer

*/
