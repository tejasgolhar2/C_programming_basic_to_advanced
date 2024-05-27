#include <stdio.h>
#include <ncurses/ncurses.h>
#include <limits.h>

int main()
{
    // RANGE OF SHORT SIGNED INTEGERS
    short int var1 = SHRT_MIN;
    short int var2 = SHRT_MAX;
    printf("\nshort int signed range: %d - %d\n  sizeof(short int): %ld bytes", var1, var2, sizeof(short int));

    // RANGE OF SHORT UNSIGNED INTEGERS
    short int var3 = 0;
    short int var4 = USHRT_MAX;
    printf("\nunsigned short int range: %u - %u\n  sizeof(unsigned short int): %ld bytes", var3, var4, sizeof(short int));

    // RANGE OF LONG SIGNED INTEGERS
    long int var5 = LONG_MIN;
    long int var6 = LONG_MAX;
    printf("\nlong int range: %ld - %ld\n  sizeof(long int): %ld bytes", var5, var6, sizeof(long int));

    // RANGE OF LONG UNSIGNED INTEGERS
    unsigned long int var7 = 0;
    unsigned long int var8 = ULONG_MAX;
    printf("\nunsigned long range:  %lu - %lu\n  sizeof(unsigned long int) %ld bytes", var7, var8, sizeof(long int));

    // RANGE OF LONG LONG SIGNED INTEGERS
    long long int var9 = LLONG_MIN;
    long long int var10 = LLONG_MAX;
    printf("\nlong long range: %lld - %lld\n  sizeof(long long int) %ld bytes", var9, var10, sizeof(long long int));

    // RANGE OF LONG LONG UNSIGNED INTEGERS
    unsigned long long int var11 = 0;
    unsigned long long int var12 = ULLONG_MAX;
    printf("\nunsigned_long_long_range: %llu - %llu\n sizeof(unsigned long long int) %ld bytes", var11, var12, sizeof(long long int));

    //NOTE: A variable can have a maximum possible byte size upto 8 bytes, not more than that
    
    return 0;
}