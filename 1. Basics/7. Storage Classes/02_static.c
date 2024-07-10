#include<stdio.h>

static int a = 5;			// 	Local + Global declaration allowed
							//	Scope limited to the file only
							//	global variables inherently possess static storage duration

int main()
{
	static int b;			// ZERO -> DEFAULT VALUE
	static int c = 5;		//	Lifetime till PROGRAM DURATION

   	printf("%d\n", a);
	printf("%d\n", b);

	{
		static int a;		// ZERO on re-declaration
		printf("%d\n", a);
	
	}

	return 0;
}




// 	STATIC - STORAGE CLASS

// 	Uninitialised Default Value: 	ZERO
//	Scope:			Both Local and Global Declaration	
// 	Lifetime:		Till end of the program
//	Location:		RAM ( initialised + uninitialised condition )

// 	In C, static variables can only be initialized using constant literals. 