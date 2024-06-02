#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 50,b = 60, c = 70;

    printf("%d %d %d\n",a,b,c); 

    printf("%d %d\n",a,b,c);   //  Error : "too many arguments for format"
     
    printf("%d %d %d\n",a,b);   //  Error : "format ‘%d’ expects a matching ‘int’ argument"
                                //          The missing match of int is printed with value 0
    return 0; 
}