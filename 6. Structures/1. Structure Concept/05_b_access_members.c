#include<stdio.h>

struct animal
{
	char *name;
	int legNum;
};

int main()
{
    struct animal a1 = {"Cow", 4};


	struct animal *ptr1 = &a1;				//	Pointer to 'struct' variable



	//	Access Members using Structure Pointer - ARROW OPERATOR

	printf("Animal Name:    %s\n", ptr1 -> name);

	//	Access Members using DOT OPERATOR
//	printf("Animal Name:    %s\n", (*ptr2).name);
//	printf("Legs of Animal: %d\n", a2.legNum);
	
	return 0;
}


//	USE OF STRUCTURE POINTER >> ARROW OPERATOR (->)