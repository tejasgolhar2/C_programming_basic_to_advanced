#include<stdio.h>
#pragma pack(1)			//	This will focus on memory storage optimization -> compromise CPU Cycles

struct employee
{
	int employeeId;
	int age;
	float weight;
	int salary;
	char shift;
};

int main()
{
    struct employee e1;

    printf("sizeof(e1): %d\n", sizeof(e1));

	return 0;
}
