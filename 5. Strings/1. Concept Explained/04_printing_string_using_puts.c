#include<stdio.h>

int main()
{
	char nav[6];

	printf("Enter name:\n");
	scanf("%s",nav);

	// Print using PUTS
	//  The cursor will be shifted to new line after using puts
	//  No need to put '\n' operator

	puts(nav);
	puts(nav);
	return 0;
}