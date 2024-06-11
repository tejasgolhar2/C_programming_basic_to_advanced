#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    
    printf("Enter a character value: ");
    
    ch = getchar();   // Single character input
   
    //printf("Entered character is %c",ch);

    //  Rather than using the printf function, we will use unformatted output function named "putchar"
    
    putchar(ch);        // Single character output
                        //   For printing multiple characters, we can use the funtion in loop

    putchar('\n');      // Move the cursor to the new line
    
    getch();

   
}

//  NOTE:       We can't pass string values here; except a single character value. 
//          for variable having more than one character to be given as a parameter will result into an error
