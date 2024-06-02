#include<stdio.h>
#include<ncurses/ncurses.h>

int main()
{
    char a,b;
    a = -76;
    b = ~(!a);
    printf("%d",b);
	return 0;
}