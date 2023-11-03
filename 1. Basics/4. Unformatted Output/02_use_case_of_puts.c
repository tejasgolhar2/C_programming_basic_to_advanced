#include<stdio.h>
#include<conio.h>

void main()
{
    char ch[10];

    printf("Enter string: ");
    gets(ch);

    puts(ch);           // Prints all characters stored in the variable
                        //      Alternatively, we can use putchar() function in loop to print a set of characters

    // New line escape sequence is built-in for the function 'puts'

    getch();
}