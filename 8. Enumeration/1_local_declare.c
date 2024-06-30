#include<stdio.h>


int main()
{
	enum Bool {False, True};

	int val = False;    
	printf("%d\n", val);

	return 0;
}


//		1) Enums can be declared in the local scope (NOT #DEFINE)