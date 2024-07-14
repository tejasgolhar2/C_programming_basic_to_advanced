#include<stdio.h>

int main() 
{
	int a[] = {1, 2, 3, 4, 5, 6};

	int * p = &a[3] ;			//	3rd Index
	int * q = &a[5] ;			//	4th Index

	printf("%d\n", p<=q);			
	printf("%d\n", p>=q);

	q = &a[3] ;					//	3rd Index
	printf("%d", p==q);

	return 0;
}

//	RELATIONAL OPERATORS ARE USED FOR COMPARISON

//	Pointers need to point to elements of same array 

//	OUTPUT DEPENDS ON POSITION OF POINTERS (NOT VALUES)