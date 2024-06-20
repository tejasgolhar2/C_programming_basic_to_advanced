#include<stdio.h>

int main()
{
    int size;
    int array1[] = {0};
    int array2[] = {[2] = 10, [5] = 25, [19] = 10};
    int array3[5] = {0,2,3,5,5};


    size = sizeof(array1)/sizeof(int);
    printf("Number of elements in array 1: %d\n", size);

    size = sizeof(array2)/sizeof(int);
    printf("Number of elements in array 2: %d\n", size);

    size = sizeof(array3)/sizeof(int);
    printf("Number of elements in array 3: %d\n", size);

    return 0;
}