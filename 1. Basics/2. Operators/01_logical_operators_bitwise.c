#include<stdio.h>

int main()
{
    // Logical Operators : Bitwise + Blockwise 

	// Bitwise Logical Operators (6)

	int a,b;
	int c,d,e,f,g,h,i;
	a = 4;
	b = 3;

	c = a & b;		// bitwise AND
	d = a | b;		// OR
	e = ~ a;		// NOT / Complement
	f = a ^ b;		// XOR
	g = a << 2;		// Left Shift
	h = b >> 1;		// Right Shift

	printf("Biwise AND: %d\nOR: %d\nNOT: %d\nXOR: %d\nLeft Shift: %d\nRight Shift: %d",c,d,e,f,g,h);

	return 0;
}