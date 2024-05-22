#include<stdio.h>
#include<conio.h>


float average(int [] , int ); 						// Function Declaration - 1st parameter is the pointer to the base address of the passed array


int main()
{
	int marks[] = { 11, 18, 15, 19, 10 };
	// int size = sizeof(marks[5]);

	int size = sizeof(marks)/sizeof(marks[0]);		// Total length (in bytes) / Size of one element (in bytes)

	float ans = average(marks, size);				// Base address of the array is passed -- Call By Reference
	
	printf("The size of Array in 'main' : %d bytes.\n", sizeof(marks));

	printf("Average of the marks : %f \n", ans);
	return 0;
}


float average( int marks1[] , int a)				// 		The array name can be changed 
{
	int sum = 0;

	for(int i=0; i<a; i++)
	{
		sum += marks1[i];
	}

	printf("The size of array in 'average' : %d bytes.\n", sizeof(marks1));			// Returns size of pointer pointing the base address of the passed array

	float ans = sum / a;

	return ans;
}