#include <stdio.h>
#include <conio.h>

void main()
{
    int n, sum = 0;
    float avg;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int marks[n];

    printf("Enter the marks of students one by one: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("The sum of marks is %d", sum);

    avg = sum / n;
    printf("\nThe average of marks: %f", avg);
    getch();
}