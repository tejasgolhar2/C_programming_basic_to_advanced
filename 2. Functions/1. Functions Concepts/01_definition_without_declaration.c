#include<stdio.h>

// Define function before the main() to prevent declaration

char fun()
{
	return 't';
}

int main()
{
    char a = fun();
    printf("Character: %c", a);

	return 0;
}