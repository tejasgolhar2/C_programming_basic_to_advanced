#include<stdio.h>
#include<ncurses.h>

int main()
 {
    //scanning a single value
    printf("Start adding values as per code:\n");
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    

    //scanning multiple datatypes
    int b;
    float c;
    char g;
    scanf("%d %f %c",&b,&c,&g);
    printf("%d_%f_%c\n",b,c,g);

    //specifying the width of digits to be taken input in INTEGER
    int d;
    //d = 12345
    int e;
    //e = 567
    scanf("%4d %d",&d,&e);
    printf("%d_%d\n",d,e);

    /*In this case, the user wont be asked for entering the second value and directly result will
    be printed for complete number of digits of first format specifier and rest digits for the next format 
    specifier*/

    
    //specifying the width of digits to be taken input in FLOAT
    float f,h;
    // f = 12.345
    // h = 13.4
    scanf("%4f",&f);
    printf("%f",f);
    scanf("%5f",&h);
    printf("%f",h);
    //among 12.345, the 4 values including the decimal point will only be stored into the varible
    //and rest in printed

    return 0;
}