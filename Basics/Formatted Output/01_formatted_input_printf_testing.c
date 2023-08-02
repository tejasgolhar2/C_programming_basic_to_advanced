#include<stdio.h>
#include<ncurses.h>

int main()
{
    int a = 50,b = 60, c = 70;
    printf("%d %d %d\n",a,b,c);
    printf("%d %d\n",a,b,c); 
    //  Results problem with "too many arguments for format" and prints the output 
    //as mentioned by the number of format specifiers
    printf("%d %d %d\n",a,b); 
    //  Results problem with "format ‘%d’ expects a matching ‘int’ argument" and prints the output 
    //as mentioned by the number of format specifiers
    //       The missing match of int is printed with value 1
    return 0; 
}