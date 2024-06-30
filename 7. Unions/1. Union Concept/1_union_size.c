#include<stdio.h>

union random 
{
	int a;
	double b;
	char c;
	long double d;		//	LARGEST SIZE: 16 BYTES
	float e;
};

int main()
{
	union random r1;

	printf("Size of union 'r1': %llu\n", sizeof(r1));    

	return 0;
}

//	Union size is the "SIZE OF THE LARGEST MEMBER" in it.