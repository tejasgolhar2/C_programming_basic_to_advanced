#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    printf("Enter the number of rows in the arrays:\n");
    scanf("%d",&a);
    printf("Enter the number of columns in the arrays:\n");
    scanf("%d",&b);
    int array1[a][b];
    int array2[a][b];
    int array3[a][b];
    array3[a][b] = 0;

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

    // get the multiplication of the two matrices
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            int val = 0;
                for(int k=0;k<a;k++) 
                // this loop is used as the max value of n in (m * n) ans (n * p) matrix multiplication
                {
                    val += array1[i][k] * array2[k][j];
                }
            array3[i][j]=val;
            printf("%d\t",array3[i][j]);
         }
        printf("\n");
    }
}
