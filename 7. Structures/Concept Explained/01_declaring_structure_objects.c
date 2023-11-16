#include<stdio.h>

/*
	Creating Structure Object

	Method 1: Declaring the object(s) name just after the structure declaration without 
				mentioning structure as "student". We cannot use the "student" tag for 
				new object declaration

	Method 2: Declaring the object(s) name in the main function. 
				Preferred method as new objects can be declared as per requirement
*/

struct student				// 		Structure Declaration
							//		Note:	'structure student' -->> referes the name of data-type 
{
	char name[1];
	int roll_no;
	float grade;

} Ravi, Prakash, Shashi; 	//	Three objects with the memtioned name is being declared


int main()
{
	int a;

	struct student Tejas;	//	Declaring structure object with format : <--datatype--> <--object-name-->
	struct Ra;
	printf("The size of 'int' datatype : %d\n", sizeof(int));
	printf("The size of 'struct student' datatype : %d\n", sizeof(struct student));

	return 0;
}