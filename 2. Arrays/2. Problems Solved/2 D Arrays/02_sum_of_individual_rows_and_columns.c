#include<stdio.h>
#include<conio.h>

void main()
{
    // get the matrix size parameters from the user
    int m, n;
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

    // sum of elements in individual rows
    for (int i = 0; i < m; i++)
    {
        printf("\nsum in row %d is ",i+1);
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + matrix[i][j];
        }
        printf("%d\n",sum);
    }
    printf("\n");

    // sum of elements in individual columns
    for (int i = 0; i < n; i++)
    {
        printf("\nsum in column %d is ",i+1);
        int sum1=0;
        for (int j = 0; j < m; j++)
        {
            sum1 = sum1 + matrix[j][i];
        }
        printf("%d\n",sum1);
    }
}