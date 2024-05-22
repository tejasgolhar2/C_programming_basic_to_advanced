#include<stdio.h>
#include<conio.h>

int main()
{
	char name[10];
	printf("Enter name:\n");
	scanf("%s",name);

	// COMPLETE STRING

	printf("%s \n",name);


	// WIDTH OF THE STRING

	// NOTE :  The width length includes the string value to be printed
	printf("%10s \n",name);


	// TO PRINT PREDEFINED NUMBER OF CHARACTERS OF THE STRING

	// Use of .n after % -->> Considers only the first n number of characters of the string
	printf("%.3s \n",name);

	// Printing a string with defined width and number of characters
	printf("%15.4s \n",name);
	return 0;
}