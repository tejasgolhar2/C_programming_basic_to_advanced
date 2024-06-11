#include<stdio.h>

int main()
{
    int a,b;
    int c,d,e,f,g;

    // Arithmetic Operators (5): bitwise operation

    a = 10;
    b = 20;

    c = a + b;	// addition
    d = a - b;	// subtractoin
    e = a * b;	// multiplication
    f = a / b;	// division -> Quotient
    g = a % b;	// division -> Remainder

    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\nRemainder: %d",c,d,e,f,g);

	return 0;
}