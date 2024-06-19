#include<stdio.h>

int a = 10 , b = 20;

int main()
{
	
	int a = 5 ;
	{
		int c;
		c = b/a;
		printf("%d", c);
	}
	return 0;
}


//		Definition of a variable is resolved by searching its containing block or function.
//	If that fails then searching the outer containing block.

// C language uses STATIC SCOPING