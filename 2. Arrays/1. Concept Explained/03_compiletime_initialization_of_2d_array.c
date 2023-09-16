#include<stdio.h>
#include<conio.h>

void main()
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

    //all elements will be initialized with Zero
    int array2d4 [5][6] = {0};
    

    //      When all values are not initialized
    //  the rest elements of the array will be Zero

    // Approach 1
    int array2d5 [2][4] = {0,1,2,3,4};

    // Approach 2
    int array2d6 [2][4] = {{0,1,2},{3,4}};
    //  the elements in the brace only will get passed to the respective row, rest elements will be zero


    // When the row number is not metioned
    int array2d7 [][3] = {0};
    // Here, only one row conatining zeroes equal to the number of columns will get stored

    // comment about the following initialization
    int array2d8 [][3] = {1,2,3,4};
    
    getch();
}
