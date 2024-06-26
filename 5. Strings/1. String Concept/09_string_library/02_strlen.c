#include<stdio.h>
#include<string.h>

int main()
{
	char *ptr = "Hello";
	printf("%d\n", strlen(ptr));    

	return 0;
}

//	Determines length of the given string

//	PROTOTYPE:	size_t strlen(const char* ptr)

//	size_t  -->  Its unsigned integer type of at least 16 bits (2 bytes)