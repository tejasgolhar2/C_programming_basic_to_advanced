#include<stdio.h>
#include<conio.h>

int main()
{
	//int* ptr; 			

/* 		Uninitialized Pointer --> Pointing to a random memory address
	
	The pointer stores the address value. 
	If the address stored in the pointer is representing a valid memory address in the same memory memory 
	which is not under the right to be allocated or defined,
		On dereferencing, It will result garbage value or may show undefined bahaviour.

	An Unintialized pointer is called a Wild Pointer
*/
	// Solution -->> Initialize the pointer with 'NULL'

	int* ptr = NULL;
	int x = 6;

	ptr = &x;

	printf("The address of x : %X\n", ptr);
	printf("Value at the 'ptr' address: %d", *ptr);

	return 0;
}