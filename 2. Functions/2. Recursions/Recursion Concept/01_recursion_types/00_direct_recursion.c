#include<stdio.h>

int fact(int);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Factorial: %d", fact(n));    

	return 0;
}

int fact(int num)
{
	if (num == 0)
	{
		return 1;
	}
	return num * fact(num - 1);
}

// 	Direct Recursion

// 	If a function calls the same function again, it's a direct recursion