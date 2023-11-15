#include<stdio.h>
#include<conio.h>


void sum(int a,int b)
{
	int add = a + b ;
	printf("The addition of %d and %d is %d\n",a,b,add);
}


void sub(int a,int b)
{
	int diff = a - b ;
	printf("The addition of %d and %d is %d\n",a,b,diff);
}

void display(void (*ptr)(int, int))
{
	// function calling via dereferencing its address and passing arguments

	(*ptr)(5,1);
}


int main()
{
	display(&sum);
	display(&sub);
	return 0;
}

/* 
	Calling a function 1 from 'main' and passing address of function 2 as argument with function 1
		The parameter of function 1 being a function pointer, points to function 2 [ i.e., CALLBACK ]
*/ 
