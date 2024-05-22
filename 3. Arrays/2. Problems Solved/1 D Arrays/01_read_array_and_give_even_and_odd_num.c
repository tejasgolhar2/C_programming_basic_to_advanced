// Write a program to read an array of 10 integers, and tell the number of even and odd numbers respectively.

#include <stdio.h>
#include <conio.h>
void main()
{
    int array[10];
    int even_no = 0, odd_no = 0;

    printf("Enter the array elements: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_no++;
        }
        else
        {
            odd_no++;
        }
    }
    printf("Even numbers : %d and Odd numbers: %d", even_no, odd_no);
    getch();
}