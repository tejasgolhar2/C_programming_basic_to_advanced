#include<stdio.h>
#include<ncurses/ncurses.h>

int main()
 {
   
    int a;

    printf("Enter integer value for 'a': ");
    scanf("%d",&a);                 //scanning a single value
    printf("%d\n",a);
    

    
    int b;
    float c;
    char g;

    printf("Enter the value of int 'a', float 'b' and char 'c': ");
    scanf("%d %f %c",&b,&c,&g);     //scanning multiple datatypes
    printf("%d_%f_%c\n",b,c,g);

    
    int d;     //d = 12345
    int e;     //e = 567
    
    printf("Enter two ints for 'd' and 'e' (5 digits each): ");
    scanf("%4d %d",&d,&e);          //specifying the width of digits in INTEGER
    printf("%d_%d\n",d,e);

    /* Specified width taken for 1st variable and rest are passed on to next varible */

    
    
    float f,h;
    // f = 12.345
    // h = 13.4
    
    printf("Enter the value of float 'f': ");
    scanf("%4f",&f);                //specifying the width of digits in FLOAT
    printf("%f \n",f); 
    
    printf("Enter the value of float 'h': ");
    scanf("%5f",&h);
    printf("%f ",h);

    return 0;
}