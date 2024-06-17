#include<stdio.h>
#include<ncurses/ncurses.h>

int areaRectangle(int a, int b)
{
	int area = a * b;
	return area;
}

int main()
{
    int a,b;

    printf("Enter length:\n");
    scanf("%d",&a);

    printf("Enter breadth:\n");
    scanf("%d",&b);

    printf("\nArea of Rectangle: %d", areaRectangle(a,b));


	return 0;
}