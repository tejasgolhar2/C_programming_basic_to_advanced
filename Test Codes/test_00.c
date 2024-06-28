#include<stdio.h>

struct employee
{
  char batch;
  int employeeId;
  float shift;
};

int main()
{
    struct employee e1;

    printf("sizeof(e1): %d\n", sizeof(e1));

  return 0;
}