#include<stdio.h>
#include<conio.h>

void function(int a,int b)				// Parameters OR Formal Parameters
{
	a = 9;
	b = 10;
	printf("The value of 'a' and 'b' is %d and %d \n", a, b);
}


int main()
{
	int a = 5;
	int b = 6;

	function(a,b);						// Arguments OR Actual Parameters

	printf("The value of 'a' and 'b' is %d and %d \n", a, b);

	return 0;
}