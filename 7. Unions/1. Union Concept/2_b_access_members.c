#include<stdio.h>

union var 
{
	int a;
	char b;	
};


int main()
{
	union var v1;					//	v1 points to the union's base address

	v1.a = 85;

	union var *ptr = &v1;			//	Union Pointer declaration

	printf("Value of 'b': %c\n", ptr -> b );

	return 0;
}



//	ACCESS UNION MEMBERS USING (->) ARROW OPERATOR