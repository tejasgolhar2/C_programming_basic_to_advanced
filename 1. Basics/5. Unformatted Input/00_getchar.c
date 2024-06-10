#include<stdio.h>
#include<ncurses/ncurses.h>

int main()
{
    char ch1;
    printf("Enter ch1 value: \n");

    ch1 = getchar();                            // Use of "getchar" -- Single Character Input
    printf("%c",ch1);
                           
    printf("\nASCII Value of %c is %d",ch1,ch1);        // ASCII value of the entered character
}