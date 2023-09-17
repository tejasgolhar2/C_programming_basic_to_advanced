#include<stdio.h>
#include<conio.h>

int main()
{
	// Using GETS()

	char name[15];
	// Here, we needs to specify the size of the string otherwise generates error
	printf("Enter name:\n");

	gets(name);
	printf("%s",name);
	return 0;
}

// 		DRAWBACK: 
// 		1. 		It will print all the entered data (with whitespace, also ) without 
// 			checking the size allocated to the string during its definition
// 		2.      We are able to get the first continuous set of characters before the space character.
//     		This means, whitespace characters are not considered by the scanf() function.