#include<stdio.h>

int main()
{
   	const int array[5] = {1,2,3,4,55};
   	//	The elements of array cannot be changed

//   	array[3] = 15;		// 	ERROR -> assignment of read-only location 'array[3]'

	return 0;
}

//	The values of array elements can't be changed anywhere in the program
// 	Array is read-only