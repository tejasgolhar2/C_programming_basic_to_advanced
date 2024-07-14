#include<stdio.h>
#include<stdlib.h>

int main()
{
	// Dangling POinter

	int* p = (int*) malloc(2*sizeof(int));		// Memory Allocation - Dynamic
												// malloc() returns void pointer to the allocated memory location

	printf("Address in p: %X\n", p);

	free(p);									// MEMORY DEALLOCATION -> The allocated memory is no more
	printf("Address in p: %X\n", p);			// p becomes dangling
	
	p = NULL;
	
	printf("Address in p: %X\n", p);		// 'p' carry address even when content at the location is freed
	return 0;;
}


/*
At Line 15: Pointer is pointing to a non-existing memory location
			Hence, Its a dangling pointer.
			Try to accessing the pointer content which results -->> Segmentation Error

At Line 17: Pointer assigned a NULL value.
			The NULL Pointer is a valid solution for Dangling Pointer
*/
