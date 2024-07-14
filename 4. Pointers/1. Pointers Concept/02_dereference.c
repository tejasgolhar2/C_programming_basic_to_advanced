#include<stdio.h>

int main()
{
    //	VALUE OF/ DEREFERENCE/ INDIRECTION
    //			Operator used to access the value stored at location pointed by the pointer

	int m = 15;
    int *a = &m;				//	POINTER INITIALIZATION

    printf("Value at Pointer Location: %d\n", *a);
    printf("Address stored by Pointer: %X\n", a);


    *a = 20;					//	DEREFERENCE OPERATOR

    printf("Value at Pointer Location: %d\n", *a);

	return 0;
}

// 	NEVER APPLY INDIRECTION OPERATOR TO UN-INITIALISED POINTER
//	NEVER ASSIGN VALUE USING AN UN-INITIALISED POINTER


//  Reference in C++ is an alias for another variable. It is defined using the & symbol.
//  C uses pointers to achieve reference functionality as in C++.