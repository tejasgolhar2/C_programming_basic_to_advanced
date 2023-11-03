#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");

    ch = getche();      //   The entered character here will be echoed on the screen 
                        //      and immediately the next line of code will get executed

    printf("\nEntered character is %c \n",ch);
    getch();
}