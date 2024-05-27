#include<stdio.h>
#include<ncurses/ncurses.h>

int main()
{	
    // Constants --> Literals
    // Varaibles --> Identifiers

    const int a = 10;		
    int b = 5;

    a = 50;
    b = 100

    printf("%d",a);	// int a is read-only being a constant, cant modified
    printf("%d",b);

	return 0;
}