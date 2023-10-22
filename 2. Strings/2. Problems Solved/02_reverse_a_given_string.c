#include<stdio.h>
#include<string.h>

int main()
{
	// Approach 1 : Using built-in function
	char value[10];
	printf("Enter the value of a string varible:\n");
	gets(value);

	char hmm[10] = strrev(value);
	printf("The reversed sring value is %s",hmm);
	reuturn 0;
}