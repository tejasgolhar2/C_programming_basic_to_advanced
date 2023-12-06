#include<stdio.h>
#include<conio.h>

int main()
{
	// Definition and Initialization of an array
	// Approach 1
	char string1 [6] = "Tejas";
	printf("%s\n",string1);

	// Approach 2
	// Append a null character at the end of the string characters
	char string2[6]={'t','e','j','a','s','\0'};
	printf("%s\n",string2);

	// Approach 3
	// Without mentioning the size of the sring i.e., number of characters
	char string3[]={'t','e','j','a','s','j','i','\0'};
	printf("%s\n",string3);

	// Approach 4
	//  Try to copy content of one string varible into another
	// Returns error

	// Approach 5
	// Trying to assign the string size less than actual number of characters present in the string
	// Results Error -->>  too many initializers for 'char [5]'
	//char string4[5]={'t','e','j','a','s','\0'};
	//printf("%s\n",string4);

	return 0;
	
}