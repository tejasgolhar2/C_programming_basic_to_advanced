#include<stdio.h>
#include<conio.h>



int sum(int, int);			//	Function Declaration


int main()
{


	int (*ptr)(int, int) = &sum;		// Points to the start address of function code

	int ans = 0;

	ans = (*ptr)(4,5);					// Dereferencing function pointer

	printf("The addition for passed parameters : %d \n", ans);
	printf("The address stored in function pointer : %X \n", ptr);

 
	return 0;
}

int sum(int a, int b)		//	Function Definition
{
	int add = a + b;
	return add;
}

// Syntax of f_pointer : 		function_ret_type  (* pointer_name)  ( datatype of arguments )
// Meaning : The function pointer is used to point to the address in the memory where the function code starts
