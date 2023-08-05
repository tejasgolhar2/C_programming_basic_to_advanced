#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    
    printf("Enter a character value: ");
    ch = getchar();
    // this will pass the single character among the entered character/s into the variable memory

    //printf("Entered character is %c",ch);

    //  Rather than using the printf function, we will use unformatted output function named "putchar"
    
    putchar(ch);
    // this will print the single character of the value stored in the variable
    //   To print multiple character simultaneously, we can use the funtion in loop

    putchar('\n');
    // to move the cursor to the new line

    //putchar("\n");
    //              This will result into error
    //   Double quotes are used for string literals and the even if it have single character, it becomes the character appended 
    // with a null character "\O" at its end.  Single quotes are for characters.

    //  NOTE:    We can't pass string values here; except a single character value. 
    //      for variable having more than one character to be given as a parameter will result into an error
    getch();

   
}