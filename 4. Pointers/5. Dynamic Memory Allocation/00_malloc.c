#include<stdio.h>
#include<stdlib.h>
#include<ncurses/ncurses.h>

int main()
{
    int n;
    printf("Enter the elements to be stored:\n");

    // Allocate memory in runtime
    int* ptr = (int*) malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
    	scanf("%d", ptr+i);
    }

	return 0;
}