#include<stdio.h>

int main()
{
	// COMMA OPERATOR

	int a,b,c,d;   // comma as a separator
	a = 5;
	b = 4;


	c = a,b;	// = have higher priority than ,
	printf("c = a,b -->> %d\n", c);


	d = (a,b);	// Returns Last term in Parenthesis, Rejects All Other Terms
	printf("d = (a,b) -->> %d", d);

	return 0;
}