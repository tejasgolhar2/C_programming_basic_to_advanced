#include<stdio.h>
#include<conio.h>

void function(int* A,int* B)				// Parameters OR Formal Parameters
{
	*A = 9;
	*B = 10;
	printf("The value of 'a' and 'b' is %d and %d \n", *A, *B);
}


int main()
{
	int a = 5;
	int b = 6;

	function(&a, &b);						// Arguments OR Actual Parameters

	printf("The value of 'a' and 'b' is %d and %d \n", a, b);

	return 0;
}