#include<stdio.h>

int main()
{
    // Compile Time 2d array initialization
    //Approach 1
    int array2d1[2][3] = {1,1,1,2,2,2};

    // Approach 2
    int array2d2[2][3] = {{1,1,1},{2,2,2}};

    //Approach 3
    int array2d3[2][3] = 
    {   {1,1,1},
        {2,2,2}
    };

    
    int array2d4 [5][6] = {0};
    //     All zero elements
    

    // Elements excepts initialized are ZERO
    // Approach 1
    int array2d5 [2][4] = {0,1,2,3,4};

    // Approach 2
    int array2d6 [2][4] = {{0,1,2},{3,4}};
    //  the elements in the brace only will get passed to the respective row, rest elements will be zero


    // When the row number is not metioned
    int array2d7 [][3] = {0};
    // Only one row conatining zeroes equal to the column number

    // comment about the following initialization
    int array2d8 [][3] = {1,2,3,4};


    // Try printing any one of the above two dimentional array
/*
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",array2d8[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}
