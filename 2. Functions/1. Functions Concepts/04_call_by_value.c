#include<stdio.h>

void function(int a,int b)		// Temporary storage for the passed values
{
	a = 9;
	b = 10;
	printf("The value of 'a' and 'b' is %d and %d \n", a, b);
}


int main()
{
	int a = 5;
	int b = 6;

	function(a,b);				// Actual values passed (NOT ADDRESSES)

	printf("The value of 'a' and 'b' is %d and %d \n", a, b);

	return 0;
}

// Actual Values are passed as arguments (NOT their ADDRESSES)
// Arguments and Parameters are stored at different memory locations

// Change in Parameters --> No change in Arguments (actual values)  