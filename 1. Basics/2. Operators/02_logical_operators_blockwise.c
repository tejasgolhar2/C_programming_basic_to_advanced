#include<stdio.h>

int main()
{
    // Logical Operators : Bitwise + Blockwise 

	// Blockwise Logical Operators (3)
	
	int a,b;
	int c,d,e,f,g,h,i;
	a = 5;
	b = 0;

	c = a && b;		// blockwise AND
	d = a || b;		// OR
	e = ! b;		// NOT 

	printf("Blockwise AND: %d\nOR: %d\nNOT: %d\n",c,d,e);

	return 0;
}