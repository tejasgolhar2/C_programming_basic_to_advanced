#include<stdio.h>

struct fruit
{
	char *f_name;
};


int main()
{
    struct fruit f[3];				//	Structure Array

	f[0].f_name = "Apple";
	f[1].f_name = "Pomegranate";
	f[2].f_name = "Mango";	
	
	for (int i = 0; i < 3; i++)
	{
		printf("Fruit %d Name : %s\n", i+1, f[i].f_name);
	}
	
	return 0;
}

//	Array of Structure
//		Every element of array will represent a struct varible