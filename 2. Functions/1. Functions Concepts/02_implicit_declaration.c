#include<stdio.h>

// Define function after Main -> Implicit Declaration --> COMPILE ERROR

int main()
{
	char a = func();
	// compiler assumes fun() to have 'int' return_type

	printf("Character: %c", a);
	return 0;
}

char fun()
//	conflict for the return_type being 'char' here

{
	return 'z';
}