#include <stdio.h>

int main()
{
    int array[5];
    

    printf("Enter the array elements:\n");

    // Using for loop to store elements into the array
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &array[j]);
    }

    // accessing the stored array elements
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}