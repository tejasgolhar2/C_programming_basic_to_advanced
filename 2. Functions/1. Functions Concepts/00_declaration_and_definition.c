#include<stdio.h>

// FUNCTION DECLARATION

void sum(void);			
// Parameter name is optional here / datatype is mandatory
// It ends with semicolon


int main()
{	
	// FUNCTION CALL

	sum();
	// DON'T mention function return_type and datatype of arguments	

	return 0;
}


// FUNCTION DEFINITION

// Parameter name is compulsory along with datatype
void sum(void)			
{
	int a,b;

	printf("Enter a and b:\n");
	scanf("%d %d", &a, &b);

	printf("The sum of %d and %d : %d",a,b,a+b);
}