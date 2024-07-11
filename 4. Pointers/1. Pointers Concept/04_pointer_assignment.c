#include<stdio.h>

int main()
{
    int a = 10, b = 20;

    int *p, *q, *r;			//	INTEGER POINTERS

    p = &a;
    q = p;				//	POINTER ASSIGNMENT	-> 	ADDRESS IS ASSIGNED

    r = &b;
    *r = *p;			// 	POINTER ASSIGNMENT  ->	VALUE IS ASSIGNED

    printf("Address in p : %p\nValue Pointed by p: %d\n", p, *p);
    printf("Address in q : %p\nValue Pointed by q: %d\n", q, *q);

    printf("Value dereferenced by '*r' is %d\n", *r);



	return 0;
}