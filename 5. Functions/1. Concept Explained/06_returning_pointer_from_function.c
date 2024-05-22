#include<stdio.h>
#include<conio.h>


int* returnPointer(int* );			// int* a == int a[] ; both are the pointers

int main()
{	
	int array[] = {5,8,9,0,7};

	int* p = NULL;

	p = returnPointer(array);		// Address from the function is stored in 'p'

	printf("The element at the returned address %x is %d", p, *p);

	return 0;
}

int* returnPointer(int* a)			
{
	
//		a --> represents the base address of the passed array

	a = a + 2;			//	Point to the address of 3rd element in the array

	return a;
}