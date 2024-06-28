#include<stdio.h>


struct									//	Declaration
{
	char name[15];
	int roll_no;
	float grade;
} tejas, ravi;							// Object Definition - 1 


int main()
{
	ravi.grade = 9.89;
	tejas.grade = 8.07;

	printf("%f\n", ravi.grade);			//	Member Access of Structure
	printf("%f\n", tejas.grade);

	return 0;
}


// 			A user-defined datatype that store different datatype values as a single object.
//		Different data-types are grouped under single name.


//	1. It should end with a semicolon
//	2. Within it, two variables cannot have same name
//	3. Individual structure member cannot be initialized
//	4. Structure is just a datatype -- Behaves as a template -- No special memory is allocated to it
//	5. For memory alllocation, the object of the structure needs to be specified
