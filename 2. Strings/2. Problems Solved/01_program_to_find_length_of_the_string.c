#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
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

	int i = 0;
	unsigned int coount=0;

	while(fname[i] != '\0')
	{
		i++;
		coount++;
	}
	printf("The length of string using loop is %d",coount);
	return 0;
}

// Features of strlen() :
// 1. Returns a positive integer [ Unsigned Int] value since length can't be negative
// 2. The function takes string name as the input parameter which is basically a pointer
//       The function takes Pointer Input Value
// 3. Every string is appened with a null character '\0' at the end.
//        The string length is considered uptill the character previous to the null character of the string