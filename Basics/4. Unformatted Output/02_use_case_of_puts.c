#include<stdio.h>
#include<conio.h>

void main()
{
    char ch[10];
    printf("Enter string: ");
    gets(ch);

    puts(ch);
    //  used to print the complete characters stored in the variable
    //      Alternatively, we can use putchar() function in loop to print 
    //  a set of characters upto a predefiend limit

    // no need to add new line escape sequence here. Its built-in for the function 'puts'

    getch();
}