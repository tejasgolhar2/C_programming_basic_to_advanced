#include<stdio.h>
#include<limits.h>

int main()
{
    char a;
    //unsigned char f;
    char b = CHAR_MIN;
    char c = CHAR_MAX;
    unsigned char d = 0;  // minimum unsigned value is Zero
    unsigned char e = UCHAR_MAX;

    printf("\nEnter a signed character below: ");
    scanf("%c", &a);
    printf("\nASCII value of %c is %d\n", a, a);

    //  RANGE OF CHARACTER
    printf("Minimum signed 'char' ASCII: %d\n", b);
    printf("Maximum signed 'char' ASCII: %d\n", c);
    printf("Minimum unsigned 'char' ASCII: %d\n", d);
    printf("Maximum unsigned 'char' ASCII: %d\n", e);
    return 0;
}