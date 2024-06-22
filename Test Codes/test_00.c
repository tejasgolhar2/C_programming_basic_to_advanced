#include<stdio.h>
int main()
{
    int array[10] = { 1, 33, 45, 93, 6, 4, 84, 68, 986, 7};
    int sum = 0, *p = &array[0];

    for(int i=0; i<10; i++)
    {
      sum += *p;
      p++;
    }

    printf("Sum: %d\n", sum);

}