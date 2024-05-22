#include<stdio.h>
#include<conio.h>

int main()
{
	int a=1,b=2;

	//Pointer Declaration - It declares that the p variable stores the address of an integer variable
	int *p;

	//Pointer Initialization
	int *q = &b;

	// X is used to print a hexadecimal value
	printf("Address in Hexadecimal: %X\n",q);

	// u is used to print unsigned integral decimal value
	printf("Address in Decimal: %u",q);
	return 0;
}