#include<stdio.h>


struct student						//	TAG PRESENT			 
{
	int roll_no;

};

int classMonitor()
{
	struct student monitor;			//	OBJECT DEFINITION USING TAG
	monitor.roll_no = 20;
	return monitor.roll_no;
}						

int main()
{

	struct student tejas;			//	OBJECT DEFINITION USING TAG

	tejas.roll_no = 24;

	printf("Roll Number of Tejas: %d\n", tejas.roll_no);
	printf("Roll Number of Monitor: %d\n", classMonitor());

	return 0;
}


//	STRUCT TAGS
//		Makes a structure template reusable for different objects.


//	Creating Structure Object

//	Method 01: Declaring the object(s) name in the main function. 
//				Preferred method as new objects can be declared as per requirement
//				Format : <--datatype--> <--object-name-->

