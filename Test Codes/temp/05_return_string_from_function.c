#include<stdio.h>
#include<conio.h>


char* display();				// Returns the pointer to the base address of the character array


int main()
{
	char* string;				// Character array with base address
	
	string = display();

	printf("Returned String : %s\n", string);

	string[0] = 'P';			//	Modify the returned string

	printf("Modified String: %s", string);

	return 0;
}


char* display()
{
	// 	The values in function stored in heap reamains and the stack is cleared
	
	
	static char val[] = "Hevlett";			// Using Arrays -- Function Stack Memory -- Local Scope
	
	// char* val = "Packyard";				// Using Strings -- Heap Memory (Read Only)-- Accessible Globally -- Can't be modified in Main
	
	return val;
}