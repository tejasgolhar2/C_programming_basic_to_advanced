#include<stdio.h>

int main()
{
	int arr[5] = { 4, 84, 68, 986, 7};

	int* p = &arr[0];
	printf("Value at p: %d\n", *p);

	//	ADDITION
	p = p + 2;

	printf("Value at p: %d\n", *p);


	//	SUBTRACTION
	p = p - 2;

	printf("Value at p: %d\n", *p);
	

	return 0;
}

//	ARRAY HAVE TO BE SAME FOR ARITHMETIC OPERATION

//	SUBTRACTION FROM ANOTHER PTR OF SAME ARRAY 	->	Number of integers present in between the address	

// 	ARITHMETIC ON POINTERS NOT POINTING TO ARRAY ELEMENT LEADS UNDEFINED BEHAVIOUR