#include <stdio.h>
#include <ncurses/ncurses.h>
#include <float.h>

int main()
{
    //  Float datatype is used to represent fractional or real numbers
    //  Float, Double and Long Double are the datatypes used for the purpose

    float pi1 = 3.1415926535897932384626433;
    printf("The value of float variable is %.18f while size of the datatype is %ld\n", pi1, sizeof(float));
    // float variable has 6 digits of precision after decimal point

    double pi2 = 3.1415926535897932384626433;
    printf("The value of double variable is %.18lf while size of the datatype is %ld\n", pi2, sizeof(double));
    // double has a precision of 15 digits after the decimal point [more accuracy] 
    
    long double pi3 = 3.1415926535897932384626433;
    printf("The value of long double variable is %.21Lf while size of the datatype is %ld\n", pi3, sizeof(long double));
    // long double has a precision of 15 digits after the decimal point [most accurate] 
    // the precision digits after decimal point varies from machine to machine or compiler
    
    //Check the number of precision digits in Long Double
    
    printf("Precision of long double: %d\n", LDBL_DIG);
    

    return 0;
}