#include<stdio.h>
#include<stdlib.h>

int flag = 0;

int main()
{
    long long int a;
    printf("Enter value: ");
    scanf("%lld", &a);      //  format specifier

    int arr[20] = {0};
    while(a)
    {
        int digit = a%10;
        if (arr[digit] == 1)
        {
            flag = 1;
            break;
        }
        else
            arr[digit] = 1;
        a = a/10;
    }

    if(flag)
    {
        printf("Digit Repeated !\n");
    }
    else{
        printf("No digit repeated\n");
    }

    return 0;
}