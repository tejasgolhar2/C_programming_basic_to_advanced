#include<stdio.h>

int add(int a, int b)
{
	return a+b;
}

int diff(int a, int b)
{
	if(a>b)
	{
		return a-b;
	}
	return b-a;
}

int mult(int a, int b)
{
	return a*b;
}


int main()
{
    int (*ptr[3])(int, int) = {add, diff, mult};		//	ARRAY OF FUNCTION POINTERS

    int m,n,op;
    printf("Enter numbers 'm' and 'n':\n");
    scanf("%d%d", &m, &n);

    printf("\nChoose Operation:\n");
    scanf("%d", &op);
    
    if(op>2)
    	return 0;

	int	res = ptr[op](m,n);								//	DEREFERENCE FUNCTION POINTERS

	printf("Answer: %d\n", res);
	return 0;
}