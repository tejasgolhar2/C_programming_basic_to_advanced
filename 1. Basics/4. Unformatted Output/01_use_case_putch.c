#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter a character: ");

    ch = getchar();
    // used to get a single character as input

    putch(ch);
    // used to print single character on the console.
    // If variable parameter contains more than 1 characters, it will result into an error

    putch('\n');
    // used to move the cursor to the new-line.

    getch();
    //used to hold the output onto the console window
}