#include<stdio.h>
#include<conio.h>

int main()
{
    // Runtime initialization of a 2d array
    int array2d[3][3];

    printf("Enter the 2d array elements: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&array2d[i][j]);
        }
    }

    printf("The entered 2d array elements are: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d\n",array2d[i][j]); 
        }
    }
    return 0;
}