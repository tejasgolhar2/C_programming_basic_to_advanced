#include <stdio.h>
#include <ncurses/ncurses.h>

int main()
{
    printf("The size of integer for the machine is %lu bytes\n", sizeof(int));
    printf("The size of long integer for the machine is %lu bytes\n", sizeof(long int));
    printf("The size of long long integer for the machine is %lu bytes\n", sizeof(long long int));
    printf("The size of short integer for the machine is %lu bytes\n", sizeof(short int));
    printf("The size of float for the machine is %lu bytes\n", sizeof(float));
    printf("The size of character for the machine is %lu bytes", sizeof(char));

    /*      The compiler is warning you that you may suffer a loss of precision.
        That is, the format specifier that you're using to print a sizeof, %d,
        is not capable of printing the full range of size_t. Change %d to %zu and your warning will go away.

        NOTE : The format specifier %d may works for windows but not for linux because of the precision limitation 
        of %d
    */
    return 0;
}