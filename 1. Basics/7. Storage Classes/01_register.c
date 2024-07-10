#include<stdio.h>

//register int x;			// GLOBAL DECLARATION NOT ALLOWED

int main()
{
	register int a;                 //  Garbage Value
    register int b = 34;


    printf("%d\n", a);              

    {
        register int b;             // On re-declaration -> Garbage Value -- NOT ZERO
        printf("%d\n", b);          
    }

    printf("%d\n", b);
	
	return 0;
}



// 	REGISTER - STORAGE CLASS

// 	Uninitialised Default Value: 	Garbage Value
//	Scope:			Local Variable OR Function/Block/Method Scope
// 	Lifetime:		Within block/function of declaration.
//	Location:		CPU Registers ( initialised + uninitialised condition )

//  The only storage-class specifier that shall occur in a parameter declaration is register

//  Bypass the switching between RAM and Processor -->> Increase Execution Efficiency
    
//  Used for frequently used local variables only like in counters, loops, etc.

//  Not accessible using Pointers 

//  Used automatically by the compiler