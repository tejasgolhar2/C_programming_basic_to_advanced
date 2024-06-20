#include<stdio.h>

//register int x;			// GLOBAL DECLARATION NOT ALLOWED

int main()
{
	register int a;
    register int b = 34;


    printf("%d\n", a);              //  Garbage Value

    {
        register int b;
        printf("%d\n", b);          // On re-declaration -> Garbage Value -- NOT ZERO
    }

    printf("%d\n", b);
	
	return 0;
}



// 	REGISTER - STORAGE CLASS

// 	Uninitialised Default Value: 	Garbage Value
//	Scope:			Local Variable OR Function/Block/Method Scope
// 	Lifetime:		Within block/function of declaration.
//	Location:		CPU Registers ( initialised + uninitialised condition )



//  Bypass the switching between RAM and Processor -->> Increase Execution Efficiency
    
//  Used for frequently used local variables only like in counters, loops, etc.
   
//  Register variables should as less as possible.

//  Not accessible using Pointers 

//  Used automatically by the compiler