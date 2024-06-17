#include<stdio.h>


struct student					// 		Structure Declaration -- Method 1
								//		Note:	'structure student' -->> referes the name of data-type 
{
	char name[5];
	int roll_no;
	float grade;

};						

struct 							//		Structure Declaration -- Method 2
{
	char breed[15];
	int age;
	float speed;

} Tommy,Moti,Bruno;				//		Object Declaration


int main()
{
	int a;
	struct student Tejas;		//	Object Declaration
	
	printf("The size of 'int' datatype : %d\n", sizeof(int));
	printf("The size of 'student' structure : %d\n", sizeof(Tejas));

	printf("The size of 'dog' structure : %d\n", sizeof(Moti));
	return 0;
}

/*
	Creating Structure Object

	Method 1: Declaring the object(s) name just after the structure declaration without 
				mentioning structure as "student". We cannot use the "student" tag for 
				new object declaration

	Method 2: Declaring the object(s) name in the main function. 
				Preferred method as new objects can be declared as per requirement
				Format : <--datatype--> <--object-name-->
*/
