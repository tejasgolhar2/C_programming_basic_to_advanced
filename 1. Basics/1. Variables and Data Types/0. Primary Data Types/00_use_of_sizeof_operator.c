#include <stdio.h>

int main()
{
    printf("size of integer: %lu bytes\n", sizeof(int));
    printf("size of long integer: %lu bytes\n", sizeof(long int));
    printf("size of long long integer: %lu bytes\n", sizeof(long long int));
    printf("size of short integer: %lu bytes\n", sizeof(short int));
    printf("size of float: %lu bytes\n", sizeof(float));
    printf("size of character: %lu bytes", sizeof(char));

    /*      The compiler is warning you that you may suffer a loss of precision.
        That is, the format specifier that you're using to print a sizeof, %d,
        is not capable of printing the full range of size_t. Change %d to %zu and your warning will go away.

        NOTE : The format specifier %d may works for windows but not for linux because of the precision limitation 
        of %d
    */
    return 0;
}