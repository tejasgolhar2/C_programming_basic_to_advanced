#include<stdio.h>
#include<ncurses.h>

int main()
{
    printf("Printing of message\n");
    printf("Hey there! How are you ?\n");

    printf("\nPrinting values inteneded\n");
    int a = 50;
    printf("%d\n",a);

    printf("\nRight Justified Output in Integers: \n");
    int b = 1123;
    printf("%7d\n",b);

    printf("\nRight Justified Output in Floats: \n");
    float d = 112.348956;
    printf("%8.3f",d);
    printf(".");

    printf("\nLeft Justified Output in Integers: \n");
    int c = 1123;
    printf("%-7d",c);
    printf(".");

    printf("\nLeft Justified Output in Floats: \n");
    float e = 112.389;
    printf("%-8.2f",e);
    printf(".");
    return 0;
}