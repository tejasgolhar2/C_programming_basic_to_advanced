#include<stdio.h>

int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    //  Pointer to 1st Array element
    int *p = array;							
    
    printf("%d\n", *p);                         //  'p' points to 0th index of array

	return 0;
}

//	ARRAY NAME POINTS TO THE BASE ADDRESS OF ARRAY

//	Array name is the pointer to the 0th index value of array.

//	Array name -> Pointer to 0th Index  ->	CANT ASSIGN A NEW ADDRESS	-> 	ERROR

    //  Pointer to Entire Array
    int (*ptr)[10];   

    printf("%d\n", *(*ptr+1));                  //  '*ptr' points to Complete Array    
                                                //  '*(*ptr)' points to 0th Index Location 