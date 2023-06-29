#include<stdio.h>
#include<ncurses.h>

int main()
{
    printf("The size of integer for the machine is %zu bytes\n", sizeof(int));
    printf("The size of float for the machine is %zu bytes\n", sizeof(float));
    printf("The size of character for the machine is %zu bytes", sizeof(char));

    return 0;
}               