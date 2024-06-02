#include <stdio.h>
#include <limits.h>
//      This header file is helpful in determining the maximum and minimum value 
//  for any given data-type via use of special functions

int main()
{
    // by-default, integers are signed in any system unless it's specified that they are unsigned

    // RANGE OF SIGNED INTEGERS
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("\nSigned Integer Range: %d to %d", var1, var2);
    //%d is used to print decimal value

    // RANGE OF UNSIGNED INTEGERS
    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;
    printf("\nUnsigned Integers Range %u to %u", var3, var4);
    //%u is used to print unsigned decimal value

    printf("\nSize of Integer: %d byte", sizeof(int));

    return 0;
}