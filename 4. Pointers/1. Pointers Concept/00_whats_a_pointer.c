#include<stdio.h>

int main()
{
	int a=1, b=2;

	int *p;			// Pointer to an integer variable

	//Pointer Initialization
	int *q = &b;


	// X/x/p is used to print a hexadecimal value
	printf("Address in Hexadecimal: %p\n",q);

	// u is used to print unsigned integral decimal value
	printf("Address in Decimal: %u",q);
	return 0;
}

//	'%p','%X','%x'	->	Format specifier to get address in hexadecimal