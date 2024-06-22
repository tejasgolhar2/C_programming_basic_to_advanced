//	Printing Multidimensional array using Pointers.

#include<stdio.h>

int main()
{
	int array[2][2] = {{1,2},{3,4}};	//	STORED IN ROW MAJOR FORMAT

	int *p = NULL;

	//	Approach 2
	for(p = &array[0][0]; p <= &array[1][1]; p++)
	{
		printf("%d ", *p);
	} 


	//	Appraoch 1
	/*

	for(int i=0; i<2; i++)				//	Single For Loop
	{
		for(int j =0; j<2; j++)
		{
			printf("%d ", array[i][j]);
		}
	}

	*/   

	return 0;
}


//	ROW MAJOR FORMAT: Row-wise storage of array in Memory
//				ARRAY --> {ROW1}{ROW2}