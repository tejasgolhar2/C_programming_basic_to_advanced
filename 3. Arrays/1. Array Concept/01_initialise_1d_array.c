#include<stdio.h>

int main()
{
	// Approach 1
    int arr1[5] = {1,2,3,4,55};

    // Approach 2
    int arr2[] = {1,2,3,4,55};

    // Approach 3	-	NOT PREFERRED
    int arr3[5];

    arr3[0] = 1;
    arr3[1] = 11;
    arr3[2] = 5;
    arr3[3] = 8;
    arr3[4] = 77;

    // Approach 4
    int arr4[5];

    for(int i=0; i<5; i++)
    {
    	scanf("%d", &arr4[i]);
    }

	return 0;
}


// FOR array elements less than length, rest locations are filled with ZEROES

// ARRAY WITH ALL ZEROS ->		arr[10] = {0};
// NOT ALLOWED			->		arr[10] = {}; 

// CONSIDER THE INITIALIZATION:
//       int array[] = {0};         ->      array with single ZERO