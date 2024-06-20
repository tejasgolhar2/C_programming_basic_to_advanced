#include<stdio.h>

void fun(int);

int main()
{
	int a = 10;
	fun(a);
	return 0;
}

void fun(int a)
{
	if (a==0)
	{
		return;
	}
	
	fun(a-1);			// Evaluation left after this line.
	printf("%d ", a);
}

// 	Non Tail Recursion

// 		A recursive function is said to be non-tail recursive 
//	if the RECURSIVE CALL IS NOT THE LAST THING done by the function.

//	After returning back, there is something left to evaluate.