//  SUM OF ARRAY ELEMENTS USING PONITERS

#include<stdio.h>
int main()
{
    int array[10] = { 1, 33, 45, 93, 6, 4, 84, 68, 986, 7};
    int sum = 0, *p;

    for(p = array; p <= a + 9; p++)
    {
      sum += *p;
    }

    printf("Sum: %d\n", sum);

}