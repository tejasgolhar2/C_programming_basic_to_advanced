#include<stdio.h>

int function(int , int);
// Parameters - FORMAL PARAMETERS - variables in declaration

int main()
{
	int m, n, prod;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    prod = function(m, n);
    // Arguments - ACTUAL PARAMETERS - actually passed 

    printf("Product: %d", prod);
	return 0;
}

int function(int a, int b)
// Parameters - FORMAL PARAMETERS - variables in definition

{
	return a+b;
}

// PARAMETER --> FORMAL PARAMETER
// ARGUMENT --> ACTUAL PARAMETER