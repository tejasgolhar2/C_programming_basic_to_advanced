#include <stdio.h>

float average(int marks[], int);  // Function Declaration

int main()
{
    int marks[5] = { 11, 18, 15, 19, 10 };
    int size = sizeof(marks) / sizeof(marks[0]);  // Correct size calculation

    float ans = average(marks, size);  // Base address of the array is passed -- Call By Reference
    
    printf("Average of the marks : %f\n", ans);
    return 0;
}

float average(int marks1[], int a)
{
    int sum = 0;
    int *p;

    for(p = marks1; p < marks1 + a; p++)
    {
        sum += *p;
    }
    
    float ans = (float)sum / a;  // Cast sum to float for correct division

    return ans;  // Returns average marks
}
