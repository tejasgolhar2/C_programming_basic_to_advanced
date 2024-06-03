#include <stdio.h>

int main()
{
    printf("size of integer: %zu bytes\n", sizeof(int));
    printf("size of long integer: %d bytes\n", sizeof(long int));
    printf("size of long long integer: %d bytes\n", sizeof(long long int));
    printf("size of short integer: %d bytes\n", sizeof(short int));
    printf("size of float: %d bytes\n", sizeof(float));
    printf("size of character: %d bytes", sizeof(char));

    /*      For %d, WARNING :  You may suffer a loss of precision.
        %d : Not capable of printing the full range of size_t. 
            Doesn't work in linux because of precision limitation

        %zu : Change %d to %zu and your warning will go away.

    */
    return 0;
}