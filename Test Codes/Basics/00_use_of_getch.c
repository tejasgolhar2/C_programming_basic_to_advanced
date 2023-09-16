#include<stdio.h>
#include<conio.h>

void main()
{
    char ch[10];
    printf("Enter character for gets(): ");
    gets(ch);
    printf("Character ch = %s",ch);
    getch();
}