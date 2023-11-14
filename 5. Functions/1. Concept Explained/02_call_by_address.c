#include<stdio.h>
#include<conio.h>

void function(int* ,int* );				// Parameters OR Formal Parameters



int main()
{
	int a = 5;
	int b = 6;

	function(&a, &b);						// Arguments OR Actual Parameters

	printf("The value of 'a' and 'b' is %d and %d \n", a, b);

	return 0;
}


void function(int* m, int* n)
{
	*m = 15;
	*n = 16;
}