#include<stdio.h>
#include<conio.h>

int main()
 {
   
    printf("Start adding values as per code:\n");
    int a;

    scanf("%d",&a);                 //scanning a single value
    printf("%d\n",a);
    

    
    int b;
    float c;
    char g;

    scanf("%d %f %c",&b,&c,&g);     //scanning multiple datatypes
    printf("%d_%f_%c\n",b,c,g);

    
    int d;     //d = 12345
    int e;     //e = 567
    
    scanf("%4d %d",&d,&e);          //specifying the width of digits in INTEGER
    printf("%d_%d\n",d,e);

    /* Specified width taken for 1st variable and rest are passed on to next varible */

    
    
    float f,h;
    // f = 12.345
    // h = 13.4
    
    scanf("%4f",&f);                //specifying the width of digits in FLOAT
    printf("%f \n",f); 
    

    scanf("%5f",&h);
    printf("%f ",h);

    return 0;
}