#include<stdio.h>

char c_return();			// Function Declaration

int main()
{	
	char ch1;
	ch1 = c_return();
	
	printf("The value of character is : %c",ch1);
	return 0;
}

char c_return()				// Function Definition --  Datatype of function return type same as in declaration
{
	char ch;

	printf("Enter the character: \n");
	scanf("%c",&ch);
	return ch;				// changing the reuturn ch a single character value 'c'


}