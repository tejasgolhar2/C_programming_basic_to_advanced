#include<stdio.h>

union student
{
	int roll;							//	Members share same memory location 
	char batch;

}tejas;

int main()
{
  	  
	tejas.roll = 67;					//	Stored at common base address

	printf("%d\n", tejas.age );
	printf("%c\n", tejas.batch );

	return 0;
}

//	Union -> 	The Union is a user-defined data type in C language that can contain elements of the
//			 different data types just like structure. But unlike structures, all the members in the 
//			 C union are stored in the same memory location. Due to this, only one member can store data 
//			 at the given instance.
