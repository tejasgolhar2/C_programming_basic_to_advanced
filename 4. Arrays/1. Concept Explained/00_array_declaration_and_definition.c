#include<stdio.h>
#include<conio.h>

#define m 10

int main()
{
    //size in integer format
    int array1[ 10 ];
    
    //size in integer format
    int array2[ 2 * 5 ];

    //size in character format  >> Unexpected Output/Not a valid syntax
    int array3[ 'a' ];

    //size in float format  >> Error: Expression must be an integer value
    //int array3 [ 1.5 ];

    //size in float expression format  >> Error: Expression must evaluate to an integer value
    //int array3 [ 1 * 2.5 ];

    // USE OF MACRO TO SPECIFY THE SIZE OF THE ARRAY
    int array6[ m ];
    
    return 0;
}