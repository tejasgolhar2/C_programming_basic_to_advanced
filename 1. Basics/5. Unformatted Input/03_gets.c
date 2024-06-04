#include<stdio.h>
#include<conio.h>

int main()
{
    char ch[12];        // String = Array of characters
    
    printf("Enter string: ");
    gets(ch);           //  variable name as parameter
                        //  takes all the entered characters on console 
    
    printf("Entered string is: %s \n",ch);
    
    getch();
}