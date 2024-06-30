#include<stdio.h>

union element 			//	UNION TAG
{
	char a;
	int b;
	float c;
	double d;
};



int main()
{
    union element a[10];

    a[0].a = 'x';
    a[1].b = 654;
    a[2].c = 54.654;
    a[3].d = 225435.646654;

    printf("a[0]: %c\na[1]: %d\na[2]: %f\na[3]: %lf\n", a[0].a, a[1].b, a[2].c, a[3].d );

	return 0;
}

//		ARRAY TO STORE ELEMENTS WITH DIFFERENT DATATYPES