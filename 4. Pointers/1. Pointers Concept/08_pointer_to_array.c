#include<stdio.h>

int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int *p = array;							//	ARRAY NAME == array[0]

    printf("Using Pointer = %p\n", p);
    printf("Using array Name = %p\n", array);

    printf("Pointer Comparison: %d\n", p == array);

    *array = 20;
    printf("%d\n", array[0]);

    //	++array;		-->		NOT ALLOWED	

	return 0;
}

//	ARRAY NAME POINTS TO THE BASE ADDRESS OF ARRAY

//	Array name is the pointer to the 0th index value of array.

//	Array name -> Pointer to 0th Index  ->	CANT ASSIGN A NEW ADDRESS	-> 	ERROR