#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("Enter a character: ");

    ch = getchar();         // single character as input
    

    putch(ch);              // Print single character on the console.
                            // for more than 1 character, it will result into an error

    putch('\n');            // used to move the cursor to the new-line.

    getch();                //used to hold the output onto the console window
}

//  putch   :  belongs to "conio.h" header