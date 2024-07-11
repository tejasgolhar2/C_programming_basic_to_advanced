#include<stdio.h>

struct wheels
{
	char name[30];
	int fuelTank;
	char engine[20];
};

typedef wheels car;

int main()
{
	//	INITIALISE ALL STRUCT MEMBERS

   	car c1 = {"Mercedes AMG GT-4", 30, "M256"};
    car c2 = {"BMW i4", 0, "Electric Motor"};

    printf("Car-1 Name:   %s\n", c1.name);
    printf("Car-2 Engine: %s\n", c2.engine);
	return 0;
}