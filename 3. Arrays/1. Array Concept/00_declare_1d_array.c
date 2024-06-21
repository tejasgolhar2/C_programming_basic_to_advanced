#include<stdio.h>

#define m 10

int main()
{
    int array1[ 10 ];
    
    int array2[ 2 * 5 ];

    //size in character format  >> Unexpected Output/Not a valid syntax
    int array3[ 'a' ];

    //size in float format  >> Error: Expression must be an integer value
    //int array3 [ 1.5 ];

    //size in float expression format  >> Error: Expression must evaluate to an integer value
    //int array3 [ 1 * 2.5 ];

    
    int array6[ m ];
    
    return 0;
}

//      Array size -> integer constant expression
//      Macros are used as convention for specifying array size