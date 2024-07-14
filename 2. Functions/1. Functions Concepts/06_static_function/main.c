#include <stdio.h>

int fun (int, int); 
void fun2(void);

int main()
{
	int sum = fun (3, 4); 
	// fun() can be accessed globally.

	printf("%d", sum); 

//	fun2();				
	// fun2() not accessible being STATIC --> Undefined Reference to fun2 - COMPILE ERROR

	return 0;
}


// Linker is unable to find the definition of fun during the linking stage of the compilation process
// Link the main.c and file1.c 		-->		 gcc main.c file1.c -o <executable_name>
