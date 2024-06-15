#include<stdio.h>
#include<conio.h>

#define row 2
#define column 2

int main()
{
    // Runtime initialization of a 2d array
    int array2d[row][column];

    printf("Enter the 2d array elements: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&array2d[i][j]);
        }
    }

    printf("The entered 2d array elements are: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           printf("%d\n",array2d[i][j]); 
        }
    }
    return 0;
}