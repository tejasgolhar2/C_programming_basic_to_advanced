#include<stdio.h>
#include<string.h>

int main()
{
    char str1[8] = "Tejas";
    char str2[10] = "ji";

    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);

    printf("%s\n", str1);

	return 0;
}

//	SELECTED STRING CONCATENATION

//	PROTOTYPE-->	char *strncat(char *destination, char *source, int val)

//		VALUE	-->	Represents the number of characters of source to be appended with destination