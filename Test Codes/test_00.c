#include<stdio.h>

int main()
{
    int array[6] = {55, 2, 3, 4, 5, 54};

    int (*ptr)[6] = &array;                         //--->  array of integers
    printf("%d", *(*ptr+6));

    return 0;
}
