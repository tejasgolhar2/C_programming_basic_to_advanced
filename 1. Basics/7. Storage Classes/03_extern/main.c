#include<stdio.h>

extern int a;                   // bring the variable present somewhere in the same project
                                // no memory space is allocated, only variable is announced

extern int b;                   // ZERO -> DEFAULT BALUE

extern int c = 4;               // Redefinition using extern is allowed

int main()
{
    {
       // extern int b = 5;
                       
    }
    
    printf("%d\n", a);
    printf("%d\n", b);          // See definition of 'b' beyond the block, if failed; look into other files
    printf("%d\n", c);          
    return 0;
}


// 	EXTERN - STORAGE CLASS

// 	Uninitialised Default Value: 	ZERO
//	Scope:			Global + Local
// 	Lifetime:		Till validity of the variable in the found file 
//	Location:		RAM

// Multiple declaration are allowed like:
//      extern int a;
//      extern int a;
//      extern int a;