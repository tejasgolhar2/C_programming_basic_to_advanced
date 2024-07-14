#include<stdio.h>

extern int a;                   //  bring the variable present somewhere in the same project
                                //  no memory space is allocated, only variable is announced

extern int b;                   //  ZERO -> DEFAULT VALUE

int k = 7;

//extern int c = 5;             //  MULTIPLE DEFINITION NOT ALLOWED
extern int d = 19;              //  DEFINITION ONCE --> ALLOCATES MEMORY -> ALLOWED

int main()
{
    {
        extern int k;
        printf("%d\n", k);
    }

    printf("%d\n", a);
    printf("%d\n", b);          //  See definition of 'b' beyond the block, if failed; look into other files
    printf("%d\n", d);
            
    return 0;
}


// 	EXTERN - STORAGE CLASS

// 	Uninitialised Default Value: 	ZERO
//	Scope:			Global
// 	Lifetime:		Till validity of the variable in the found file 
//	Location:		RAM

//  THE VARIABLE HAVE TO BE DECLARED PREVIOUSLY SOMEWHERE BEFORE ACCESS
//  LINKER ERROR WHEN NO VARIABLE FOUND

//  THE VALUE OF AN EXTERN VARIABLE ONCE INITIALISED IS 'READ-ONLY'

// Multiple declaration are allowed like:
//      extern int a;
//      extern int a;
//      extern int a;