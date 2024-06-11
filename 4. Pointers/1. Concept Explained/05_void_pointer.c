#include<stdio.h>

int main()
{

	int a = 10;
	float b = 11.2;
	char d = 'e';

	void* p;  	// Declaration

	p = &a;		// Initialization
	printf("Address in p : %X\n", p);

	
	// printf("Value at p : %d\n", *p);   			// Dereferencing
													// Results Error

	printf("Value at p : %5d\n", *(int*)p );		// Typecasting for Dereferencing 


	void* q = &b;
	void* r = &d;

	printf("Value at q : %.1f\n", *(float*)q );		// Typecasting void pointer to point to a "float" value
	printf("Value at r : %c\n", *(char*)r );		// Typecasting void pointer to point to a "char" value
	
	return 0;

}

// Void : 	Having no associated datatype. It can store the address of any datatype value 
// 			Void pointer cannot be directly dereferenced
// 			A void pointer needs to be typecasted before dereferencing

// Advantage: 	Rather than intializing separate pointer as per datatype, 
//				the void pointer can be initialized and accessed accordingly.