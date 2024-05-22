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
// 			checking the size allocated to the string during its definition.