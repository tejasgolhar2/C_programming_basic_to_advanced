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
		return;
	
	printf("%d ", a);
	return fun(a-1);		// Nothing to evaluate after this line.
}

// 	Tail Recursion

// 		A recursive function is said to be tail recursive if the 
//	RECURSIVE CALL IS THE LAST THING done by function.
// 		There is no need to keep the record of the previous state.

//	Evaluation step is missing during the recursion calls.