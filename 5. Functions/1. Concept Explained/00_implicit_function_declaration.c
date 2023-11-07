#include<stdio.h>

void sum(void);			// Function Declaration

int main()
{	
	sum();				// To call a function which is not yet declared
	return 0;
}

void sum(void)			// Function Definition --  Datatype of function return type same as in declaration
{
	int a,b;

	printf("Enter the value of 'a':\n");
	scanf("%d",&a);

	printf("Enter the value of 'b':\n");
	scanf("%d",&b);

	int sum = 0;
	sum = a + b;
	printf("The sum of %d and %d is %d",a,b,sum);
}

/*
In Implicit Declaration, 
	When function is called without its declaration, 
	it assumes the presence with the return value of the fuction being an integer

If tried changing the return type of the Function to Integer, 
	It wont cause any issue

If tried changing the return type of the fuction to Float,
	The implicit declaration expects the return type to be integer, which produces error
	"conflicting types for ""function-name""

*/