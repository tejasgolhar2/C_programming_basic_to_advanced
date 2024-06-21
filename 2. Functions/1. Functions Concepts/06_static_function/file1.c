#include<stdio.h>

int fun(int a, int b)		
// NON-STATIC FUNCTION -> Global access
{
	return a+b;
}

static void fun2(void)	
// STATIC FUNCTION -> Local Access	
{
	printf("\nThis is a call of static function");
}



// static -> 	Restricts the function to the file where it is located.
// 			We can create fuction with same name in another file.

// fun() --> can be accessed in the main.c
// fun2() --> have access limited to file1.c