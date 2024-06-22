#include<stdio.h>

int main()
{
	int p = 5, q = 10;
    // Declaration

	int *a;		// 'a' variable stores address of integer value


	// INITIALISATION
	// Approach 1

	int *m;
	m = &p;


	// Approach 2

	int *n = &q;


	return 0;
}



//	Syntax:		data_type * ptr_name = value_address
//				Here, datatype refers the datatype of value pointed by the variable

//	TO LEAVE A POINTER VAR UN-INITIALISED IS A BAD PRACTICE

