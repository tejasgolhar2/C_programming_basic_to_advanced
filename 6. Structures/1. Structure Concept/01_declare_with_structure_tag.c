#include<stdio.h>


struct student						//	Structure Tag			 
{
	int roll_no;

};

int classMonitor()
{
	struct student monitor;			//	Use 1 - in FUNCTION
	monitor.roll_no = 20;
	return monitor.roll_no;
}						

int main()
{

	struct student tejas;			//	Use 2 - in Local Scope

	tejas.roll_no = 24;

	printf("Roll Number of Tejas: %d\n", tejas.roll_no);
	printf("Roll Number of Monitor: %d\n", classMonitor());

	return 0;
}


//	STRUCT TAGS
//		Makes a structure template reusable for different objects.


//	Creating Structure Object

//	Method 00: Declaring the object(s) name just after the structure declaration without 
//				mentioning structure as "student". We cannot use the "student" tag for 
//				new object declaration

//	Method 01: Declaring the object(s) name in the main function. 
//				Preferred method as new objects can be declared as per requirement
//				Format : <--datatype--> <--object-name-->

