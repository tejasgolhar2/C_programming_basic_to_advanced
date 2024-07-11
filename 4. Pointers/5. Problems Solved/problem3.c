//	REVERSE A SERIES OF NUMBERS USING POINTERS

#include<stdio.h>
#define n 5

int main()
{
	int array[n];
	int *p = NULL;

	//	USER INPUT - SERIES
   	printf("Enter 5 array elements:\n");

    for(p=array; p <= array+n-1; p++)
    {
    	scanf("%d", p);
    }

    for(p=array+n-1; p>= array; p--)
    {
    	printf("%d ", *p);
    }
	return 0;
}