#include<stdio.h>

int main()
{

	char name[15];			// SPECIFY SIZE --> ELSE ERROR

	printf("Enter name:\n");

	gets(name);
	printf("%s",name);
	return 0;
}

//		DECLARED IN "stdio.h" header

// 		DRAWBACK: 
// 				Prints all the entered data (including whitespaces) without checking the size allocated.