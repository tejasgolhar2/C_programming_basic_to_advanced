// Write a program to read two arrays of size 5 and store sum of these arrays into a 3rd array

#include <stdio.h>
#include <conio.h>

void main()
{
    int arr1[5];
    int arr2[5];
    int arr3[5];

    printf("Enter the elements of 1st array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of 2nd array: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("The elements as the sum of two arrays: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr3[i]);
    }
    getch();
}