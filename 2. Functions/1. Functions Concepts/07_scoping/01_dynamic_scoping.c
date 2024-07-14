#include<stdio.h>

int fun1(int);
int fun2(int);

int a = 5;

int main()
{
	int a = 10; 
	a = fun1(a);
	printf("%d", a);

	// Dynamic Scoping O/P: 30
	// Static Scoping O/P: 25

}

int fun1(int b)
{
	b = b+10; 
	b = fun2(b); 
	return b;
}


int fun2(int b)
{
	int c;
	c = a + b;
	return c;
}

//		Definition of a variable is resolved by searching its containing block.
//	If not found, then searching its calling function and if still not found then
//	the function which called that calling function will be searched and so on.

// 	Perl supports both static and dynamic scoping using 'local' and 'my' keywords