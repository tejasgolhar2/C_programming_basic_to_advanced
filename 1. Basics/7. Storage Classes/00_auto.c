#include<stdio.h>

int k;
//auto int x = 10;			// Global scope not allowed for 'auto' - ERROR

int main()
{
	auto int a;
//	auto int a;				//	Re-declaration / definition is not allowed
	int b = 20;				// A variable having nothing ahead of name is 'auto' by default
	int c = 30;

	printf("%d\n", a);		

    {	
    	
     	int b = 44;
    	printf("%d\n", b);	


		int c;
		printf("%d\n", c);	//	On re-declaration --> ZERO
    }

    printf("%d\n", b);
    printf("%d\n", c);

	printf("%d\n", k);		// 	Uninitialised global auto var --> ZERO

	return 0;
}



// Aspects of a variable to be considered in a c program:

// 1. Name
// 2. Value type i.e., storage capacity associated
// 3. Scope 
// 4. Location of storage in declared and defined state.
// 5. Lifetime
// 6. Default value in unintialised state.

// 	All the above are obtained by "STORAGE CLASSES IN C"



// 	AUTO - STORAGE CLASS

// 	Uninitialised Default Value: 	
//				a) For Local Variable:	Garbage Value
//				b) For Global Variable:	ZERO
//	Scope:			Local Variable OR Function/Block/Method Scope + GLOBAL VARIABLE
// 	Lifetime:		Within block of declaration.
//	Location:		Stack Memory ( initialised + uninitialised condition )