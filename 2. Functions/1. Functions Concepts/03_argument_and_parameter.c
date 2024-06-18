#include<stdio.h>

int function(int , int);
// Parameters - variables in declaration

int main()
{
	int m, n, prod;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    prod = function(m, n);
    // Arguments - actual passed PARAMETERS to function

    printf("Product: %d", prod);
	return 0;
}

int function(int a, int b)
// Parameters - variables in definition

{
	return a+b;
}

// PARAMETER --> FORMAL PARAMETER
// ARGUMENT --> ACTUAL PARAMETER