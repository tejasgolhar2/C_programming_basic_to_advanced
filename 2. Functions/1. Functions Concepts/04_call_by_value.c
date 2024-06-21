#include<stdio.h>

void function(int a,int b)		// Temporary storage for the passed values
{
	a = 9;
	b = 10;
	printf("Function Call: \n'a': %d\n'b': %d\n", a, b);
}


int main()
{
	int a = 5;
	int b = 6;

	function(a,b);				// Actual values passed (NOT ADDRESSES)

	printf("Main Call: \n'a': %d\n'b': %d\n", a, b);

	return 0;
}

// Actual Values are passed as arguments (NOT their ADDRESSES)
// Arguments and Parameters are stored at different memory locations

// Change in Parameters --> No change in Arguments (actual values)  

// 	NOTE: IN C, function parameters are always PASSED by value. 
//		PASS BY REFERENCE CAN BE SIMULATED BY EXPLICITLY PASSING POINTER VALUE. 