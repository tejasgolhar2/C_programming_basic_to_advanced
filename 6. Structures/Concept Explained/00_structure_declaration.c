#include<stdio.h>


struct student						// Structure Declaration -- User Defined Datatype
{
	char name[15];
	int roll_no;
	float grade;
}; 


int main()
{
	struct student S1;				// Object Declaration
	printf("Size of S1 : %d",sizeof(S1));
	return 0;
}


/* 			A user-defined datatype that store different datatype values as a single object
		Different data-types are grouped under single name
		To create a structure means to create a template for data-type that can take differnt primitive data-type elements 
*/

/*

	1. It should end with a semicolon
	2. Within it, two variables cannot have same name
	3. Individual structure member cannot be initialized
	4. Structure is just a datatype -- Behaves as a template -- No special memory is allocated to it
	5. For memory alllocation, the object of the structure needs to be specified

*/
