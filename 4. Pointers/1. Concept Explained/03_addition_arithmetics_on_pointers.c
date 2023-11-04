#include<stdio.h>
#include<conio.h>

int main()
{
	int array[5]={1,3,5,3,56};

	int* p = & array[0];			// Referecing a pointer variable to the base address of array
	printf("Value at p : %d\n",*p);

	p = p + 3;					// Adding integer to address 
								// New Address = base address + interger * sizeof(int)
	printf("Value at p : %d",*p);
	return 0;
}

//Note: Two pointer values cannot be added