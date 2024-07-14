#include<stdio.h>

struct employee
{
	int employeeId;
	int age;
	float weight;
	char shift;
};

int main()
{
    struct employee e1;

    printf("sizeof(e1): %d\n", sizeof(e1));

	return 0;
}


// 	For the structure members, memory is allocated as contiguous blocks.
//	CPU accesses one word at a time.
//	It stores the members such that, processor can access complete value of member in one CPU Cycle.
//	This forces the compiler to store the members in "word" fashion in memory for member access in single cycle.
//	This arrangement involves creation of empty spaces in between the two members stored in memory  -->  PADDING

//	NOTE
//	1. Any data type will always store its value at the address which is multiple of the size of that data type.
//			Example: int will always start from 4,8,12,.......
//	2. any structure will take the size equal to the multiple of maximum bytes taken by a variable in that structure.