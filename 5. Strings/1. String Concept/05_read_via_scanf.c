#include<stdio.h>

int main()
{

	char name[15];				// SPECIFY SIZE --> ELSE ERROR
	
	printf("Enter name:\n");

	scanf("%s", name);			// "name" is a pointer to the CHARACTER ARRAY [ '&' not needed here]
	printf("%s", name);
	return 0;
}

// 		DRAWBACK: 
// 		1. 		Prints all the entered data ( without whitespace ) without 
// 			checking the size allocated.
// 		2.    	Characters after the whitespace are ignored.