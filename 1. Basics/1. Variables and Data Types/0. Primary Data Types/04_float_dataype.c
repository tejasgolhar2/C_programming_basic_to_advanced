#include <stdio.h>
#include <float.h>

int main()
{
    //  Float datatype is used to represent fractional or real numbers
    //  Float, Double and Long Double are the datatypes used for the purpose

    float pi1 = 3.1415926535897932384626433;
    printf("float: %.20f and sizeof(float) %d\n", pi1, sizeof(float));
    // float : 6 digits of precision

    double pi2 = 3.1415926535897932384626433;
    printf("double: %.20lf and sizeof(double) %d\n", pi2, sizeof(double));
    // double : 15 digits of precision
    
    long double pi3 = 3.1415926535897932384626433;
    printf("long double: %.20Lf and sizeof(long double) %d\n", pi3, sizeof(long double));
    // long double : 15 digits of precision
    // the precision digits after decimal point varies from machine to machine or compiler
    
    //Check the number of precision digits in Long Double
    
    printf("Precision of long double: %d\n", LDBL_DIG);
    

    return 0;
}

//NOTE: We cannot perform Bitwise and Modulus (%) operation on float datatypes