#include<stdio.h>

union var 
{
	int a;
	char b;	
};


int main()
{
	union var v1 = {.a = 85};					//	DESIGNATED INITIALISE


	union var *ptr = &v1;						//	Union Pointer declaration

	printf("Value of 'a': %d\n", ptr -> a );

	return 0;
}



//	ACCESS UNION MEMBERS USING (->) ARROW OPERATOR