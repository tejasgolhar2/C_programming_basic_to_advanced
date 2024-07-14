#include<stdio.h>

enum Bool {False, True};

//	OPTIONAL REPRESENTATION: 	 enum Bool { False = 0, True = 1}

int main()
{
    int val1, val2;
    val1 = True;
    val2 = False;

    printf("Value of val1 = %d\n", val1);
    printf("Value of val2 = %d\n", val2);

	return 0;
}

//	ENUM -- ENUMERATION		-->>	alternative for " #DEFINE "

//			A USER DEFINED DATATYPE USED TO ASSIGN NAMES TO INTEGRAL CONSTANTS
//		SINCE, NAMES ARE EASIER TO HANDLE IN PROGRAMS.

//	If values are not assigned, compiler will start assigning values starting from ZERO (0)...

//	ENUM preferred over #DEFINE:
//		1) Enums can be declared in the local scope
//		2) Enum names are automatically initialized by the compiler