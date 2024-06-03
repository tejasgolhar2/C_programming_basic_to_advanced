#include<stdio.h>

int main()
{
	// Relational Operators (6)
    int a,b;
    int c,d,e,f,g,h;

    a = 10;
    b = 9;

    c = a < b;
    d = a > b;
    e = a <= b;
    f = a >= b;
    g = a == b;
    h = a != b;

    printf("a less than b: %d\n", c);
    printf("a greater than b: %d\n", d);
    printf("a less than or equals to b: %d\n", e);
    printf("a greater than or equals to b: %d\n", f);
    printf("a equals b: %d\n", g);
    printf("a not equals b: %d\n", h);
    
	return 0;
}