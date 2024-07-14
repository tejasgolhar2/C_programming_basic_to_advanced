#include<stdio.h>

int main()
{
	int array[5]= { 1, 33, 45, 93, 6};

	int* p = & array[0];			// Pointer to Array

	printf("Value before ptr_add: %d\n", *p);

	p = p + 3;						// 	Adding integer to address 
									// 		new_Address = base_address + integer * sizeof(int)
	printf("Value after ptr_add: %d\n", *p);

	return 0;
}


//	ARRAY HAVE TO BE SAME FOR ARITHMETIC OPERATION

//	ADDITION OF TWO DIFFERENT POINTERS IS NOT ALLOWED

//	SUBTRACTION FROM ANOTHER PTR OF SAME ARRAY 	->	Distance between pointers	

// 	ARITHMETIC ON POINTERS NOT POINTING TO ARRAY ELEMENT LEADS UNDEFINED BEHAVIOUR