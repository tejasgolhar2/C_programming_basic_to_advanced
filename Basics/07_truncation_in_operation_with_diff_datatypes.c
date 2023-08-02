#include<stdio.h>
#include<conio.h>

int main()
{
    int var1 = 4/9;
    float var2 = 4/9; 
    float var3 = 4.0/9.0;  //currently it's a double value

    //we use 'f' after the number constast to emphasize that it's a float number

    printf("%.2d\n", var1);
    printf("%.2f\n", var2);
    printf("%.2f\n", var3);
    
    return 0;
}