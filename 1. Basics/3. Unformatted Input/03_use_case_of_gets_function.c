#include<stdio.h>
#include<conio.h>

void main()
{
    char ch[12];
    // since in a long string, there wont be a single charactere but a set of multiple characters
    printf("Enter string: ");
    gets(ch);
    // this function takes the variable name as parameter and takes all the entered characters on console
    
    printf("Entered string is: %s",ch);
    // since we are displaying string, %s is used ; for single character, %c is used.

    getch();
}