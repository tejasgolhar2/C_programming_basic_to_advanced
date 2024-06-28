#include<stdio.h>

struct animal
{
	char *name;
	int legNum;
};

int main()
{
    struct animal a1 = {"Cow", 4};
	struct animal a2 = {"Cock", 2};

	//	Pointer to a variable of type -> struct
	struct animal *ptr1 = &a1;
	struct animal *ptr2 = &a2;

	//	Access Members using Structure Pointer - ARROW OPERATOR
	printf("Animal Name:    %s\n", ptr1 -> name);
	printf("Legs of Animal: %d\n", ptr1 -> legNum);

	//	Access Members using DOT OPERATOR
	printf("Animal Name:    %s\n", (*ptr2).name);
	printf("Legs of Animal: %d\n", a2.legNum);
	
	return 0;
}

//	USE OF STRUCTURE POINTER >> ARROW OPERATOR (->)