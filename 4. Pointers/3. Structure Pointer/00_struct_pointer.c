#include<stdio.h>

struct human
{
	char *species;
	char *genus;
	int limbs;
};

int main()
{
    struct human mark = {"Homo Sapiens", "Sapiens", 4};

    struct human *h_ptr = &mark;						//	STRUCUTRE POINTER

    printf("%s\n", h_ptr -> species);

	return 0;
}