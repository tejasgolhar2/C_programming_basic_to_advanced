#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the number of rows in the arrays:\n");
    scanf("%d",&a);
    printf("Enter the number of columns in the arrays:\n");
    scanf("%d",&b);
    int array1[a][b];
    int array2[a][b];
    int array3[a][b];

    // Enter the elements of the first matrix 
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }

    // Enter the elements of the second matrix 
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }

    // get the sum of the two matrices
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            array3[i][j]=array1[i][j]+array2[i][j];
            printf("%d\t",array3[i][j]);
        }
        printf("\n");
    }
    getch();
}