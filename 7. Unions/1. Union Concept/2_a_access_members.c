#include<stdio.h>

union var 
{
	int a;
	char b;	
};


int main()
{
	union var v1;

	v1.a = 90;

	printf("b: %c\n", v1.b );			//	ACCESS UNION MEMBERS USING (.) DOT OPERATOR

	return 0;
}
