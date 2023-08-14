#include<stdio.h>
#include<conio.h>

void main()
{
    int n,sum=0;
    float avg;
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
    printf("\nThe average of marks: %f",avg);
    getch();
}