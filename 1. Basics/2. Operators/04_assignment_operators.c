#include<stdio.h>

int main()
{
    // Assignment Operators (6)

	int a,b;
	int c,d,e,f,g,h;
	a = 5;
	b = 40;
	d = 40;
	e = 4;
	f = 10;
	g = 20;
	h = 15;	

	c = a;		// assignment
	d += a;		// addition : d = d + a; FIRST ADD THEN ASSIGN
	e -= b;		// subtraction : e = e - b
	f *= a;		// multiplication : f = f * a;
	g /= a;		// division : g = g / a;
	h %= b;		// remainder : h = h % b;

	printf("c: %d\nd: %d\ne: %d\nf: %d\ng: %d\nh: %d\n",c,d,e,f,g,h);

	return 0;
}

/* Associativity Order:  >>=  <<=  |=  ^=  &=  %=  /=  *=  -=  +=  =  */ 