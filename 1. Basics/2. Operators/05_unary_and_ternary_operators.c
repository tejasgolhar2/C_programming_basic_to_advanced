#include<stdio.h>

int main()
{
    // Unary Operators ()

	int a, b;
	int c,d,e,f,g,h;
	a = 654;
	b = 384;

	c = sizeof(a);
	d = ++a;		// Pre-increment : a = a + 1; -->> d = a;
	e = --a;		// Pre-decrement : a = a - 1; -->> e = a;

	f = b++;		// Post-increment : f = b; -->> b = b + 1;
	g = b--;		// Post-decrement : g = b; -->> b = b + 1;

	printf("Pre-increment : %d\nPre-decrement: %d\nPost-increment: %d\nPost-decrement: %d", d,e,f,g);


	// Ternary Operator / Conditional Operators

	h = a ? printf("a is non-zero") : printf("a is zero");

	return 0;
}