#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of array elements: ");
	scanf("%d", &n);

    int array[n];					// user defined -> variable length arrray

    printf("Enter the elements of 1st array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Array Elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}

//	Variable Length Array (VLA) cannot have Static Storage Duration --> compile time defined value
// 	Variable length array does not have initializor  --> elements to be specified during run-time