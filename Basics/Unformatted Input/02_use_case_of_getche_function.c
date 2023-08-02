#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getche(); 
    //the entered character here will be echoed on the screen and immediately the next line of code will run
    printf("\nEntered character is %c",ch);
    return 0;
}