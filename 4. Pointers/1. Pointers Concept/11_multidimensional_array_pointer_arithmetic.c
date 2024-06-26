#include<stdio.h>

int main()
{
    int a[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};

    //	ACCESS '7' USING POINTERS

    printf("%d\n",**(*(a+1)+1) );

    //  a+1             -> 2nd 2D array
    //  *(a+1)+1        -> 2nd 1D array in 2nd 2D array
    //  *(*(a+1)+1)     -> 1st element of 2nd 1D array in 2nd 2D array


	return 0;
}