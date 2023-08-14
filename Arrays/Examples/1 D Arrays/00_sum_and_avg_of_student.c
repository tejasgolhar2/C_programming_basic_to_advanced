#include<stdio.h>
#include<conio.h>

void main()
{
    int n,avg,sum=0;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the array elements:\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    for(int j=0;j<n;j++)
    {
        sum = sum + marks[j];
    }
    printf("The sum of marks is %d",sum);
    avg = sum/n;
    printf("\nThe average of marks: %d",avg);
    getch();
}