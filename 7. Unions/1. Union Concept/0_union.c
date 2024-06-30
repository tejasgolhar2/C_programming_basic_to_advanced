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

//	Union -> 	User defined datatype where the members share the same memory location
//						Whereas, struct members have different memory locations

//		CHANGES made is one member are reflected in other members as well.
