#include<stdio.h>

#define N 10

int main()
{
    // WHEN ONLY FEW ELEMENTS ARE NON-ZERO IN ARRAY TO BE INITIALIZED

	// Approach 1
    int arr1[N] = { 1, 0, 0, 0, 0, 2, 3, 0, 0, 0};

    for( int i=0; i<N; i++)
    {
    	printf("%d ", arr1[i]);
    }


    printf("\n");


    // Approach 2 - designated initialization
    int arr2[N] = { [0] = 1, [5] = 2, [6] = 3};

    for( int i=0; i<N; i++)
    {
    	printf("%d ", arr2[i]);
    }


	return 0;
}

// Index values in representation -> Desginators
// Elements exept indexes are ZEROES
// Designator sequence can be changed
// FOR Array without size -> length deducted by compiler from largest designator index

//  NOTE:
//      Deginated initialization is given priority over traditional initialization

//      int a[] = {1, 2, 3, [2] = 4, [6] = 45}      ==      int a[] = {1, 2, 4, 0, 0, 0, 45};