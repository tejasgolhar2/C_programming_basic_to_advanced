#include<stdio.h>

int *fun()
{
	int i=10;			// 	LOCAL / AUTOMATIC VARIABLE
	return &i;			//	warning: address of local variable 'i' returned 
}

int main() 
{
	int *p = fun();
	printf("%d", *p);
}

// 	NEVER RETURN ADDRESS OF AN AUTOMATIC VARIABLE