#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	// Initialization of a string with character datatype having length of 30 characters
	char fname[30];

	printf("Enter Name:\n");
	gets(fname);
	
	// APPROACH 1 : Using built-in function - strlen()
	// Use of STRLEN() Function to get the string length
	// The 'space' character is counted here

	unsigned int count = strlen(fname);
	printf("The string length using function is %d\n",count);

	// APPROACH 2 : Using Loops
	// The space character is not counted in the string
	// The approach have a drawback that the checking for the null characters is done only upto the size of the string variable
	//   which can be cumbersome with the use case of gets() within the program

	int i = 0;
	unsigned int cunt=0;

	while(fname[i] != '\0')
	{
		i++;
		cunt++;
	}
	printf("The length of string using loop is %d",cunt);
	return 0;
}

// Features of strlen() :
// 1. Returns a positive integer [ Unsigned Int] value since length can't be negative
// 2. The function takes string name as the input parameter which is basically a pointer
//       The function takes Pointer Input Value
// 3. Every string is appened with a null character '\0' at the end.
//        The string length is considered uptill the character previous to the null character of the string