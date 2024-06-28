#include<stdio.h>


typedef struct student						//	Structure Tag			 
{
	int roll_no;

} student;									//	alias for student
						

int main()
{

	student tejas;							

	tejas.roll_no = 24;

	printf("Roll Number of Tejas: %d\n", tejas.roll_no);

	return 0;
}

//		TYPEDEF -->	Used to create alias for the existing names

// 		FORMAT	-->		typedef existing_name new_name; 
