#include <stdio.h>
#include <conio.h>

void main()
{
    // get the matrix size parameters from the user
    int m, n, sum = 0;
    printf("Enter the number of rows in matrix:\n");
    scanf("%d", &m);
    printf("Enter the number of columns in matrix:\n");
    scanf("%d", &n);
    int matrix[m][n];

    // to scan the matrix elements from the user
    printf("Enter the matrix elements as per the above parameters one by one:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // to get sum of all elements in the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    // print sum
    printf("The sum of elements in the matrix: %d", sum);
}