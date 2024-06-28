#include<stdio.h>

int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    //  Approach 1
    int *p = array;							//	ARRAY NAME == array[0]
    printf("array[0] = %p\n", p);


    //  Approach 2
    int (*ptr)[10];                         //--->  array of integers

    //	int *ptr[10];		                //--->  array of integer pointers



	return 0;
}

//	ARRAY NAME POINTS TO THE BASE ADDRESS OF ARRAY

//	Array name is the pointer to the 0th index value of array.

//	Array name -> Pointer to 0th Index  ->	CANT ASSIGN A NEW ADDRESS	-> 	ERROR