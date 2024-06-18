#include<stdio.h>


// USE OF FUNCTION POINTER -->> REPLACEMENT FOR SWITCH STATEMENT


void sum(int m,int n)
{
	printf("The addition of %d and %d : %d\n", m, n, m+n);
}

void diff(int m,int n)
{
	printf("The subtraction of %d and %d : %d\n", m, n, m-n);
}


void mult(int m,int n)
{
	printf("The multiplication of %d and %d : %d\n", m, n, m*n);
}


void div(int m,int n)
{
	printf("The division of %d and %d : %d\n", m, n, m/n);
}



int main()
{	
	int ch,a,b;

	void (*fptr[4])(int, int) = {&sum, &diff, &mult, &div};
	
	printf("Choose the operation: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&ch);

	printf("Enter the variables: \n");
	scanf("%d %d", &a,&b);

	(*fptr[ch-1])(a, b);

	return 0;
}