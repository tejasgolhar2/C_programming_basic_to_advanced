#include<stdio.h>

int main()
{
	// Using SCANF()

	char name[15];
	// Here, we needs to specify the size of the string otherwise generates error
	printf("Enter name:\n");

	scanf("%s",name);
	printf("%s",name);
	return 0;
}

// 		DRAWBACK: 
// 		1. 		It will print all the entered data ( without whitespace ) without 
// 			checking the size allocated to the string during its definition
// 		2.      We are able to get the first continuous set of characters before the space character.
//     		This means, whitespace characters are not considered by the scanf() function.
//