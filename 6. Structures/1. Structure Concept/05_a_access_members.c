#include<stdio.h>

struct car
{
	int fuelTank;

} c1, c2;


int main()
{

    c1.fuelTank = 30;							//	Use of (.) operator of member access

    printf("Car Fuel Tank: %d\n", c1.fuelTank);

	return 0;
}