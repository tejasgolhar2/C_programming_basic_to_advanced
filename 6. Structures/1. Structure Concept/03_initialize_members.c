#include<stdio.h>

struct car
{
	char name[30];
	int fuelTank;
	char engine[20];
};

int main()
{
	//	INITIALISE ALL STRUCT MEMBERS

    struct car c1 = {"Mercedes AMG GT-4", 30, "M256"};
    struct car c2 = {"BMW i4", 0, "Electric Motor"};

    printf("Car-1 Name:   %s\n", c1.name);
    printf("Car-2 Engine: %s\n", c2.engine);
	return 0;
}