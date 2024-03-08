#include<stdio.h>
#include<conio.h>

int main()
{
    
    int a = 50;
    printf("%d \n",a);   //Printing values inteneded

    
    int b = 1123;
    printf("%7d \n",b);  //Right Justified Output in Integers - Width of total 7 digits


    float d = 112.348956;
    printf("%10.2f \n",d);      // Right Justified Output in Floats -
                                // Width of total 10 digits
                                // 2 digits after the decimal point
    

    int c = 1179;
    printf("%-7d. \n",c);   // Left Justified Output in Integers  -- width of 7 digits are allocated to the character towards left
     

    
    float e = 112.389;
    printf("%-8.2f",e);  // Left Justified Output in Floats
   
    return 0;
}