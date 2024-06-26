#include<stdio.h>
#include<string.h>

int main()
{
	char str1[8]="Tejas ";
	char str2[8]="Golhar";
	
	strcat(str1, str2);			// char *strcat( char* destination, const char* source)
	printf("%s", str1);  
	return 0;
}

//	Concatenate source string with the destination and save in destination

//	Returns pointer to the destination string

//	Overflow Buffer -- Function doesn't check for the size of the destination and overwrites the content of source beyond the size (if present)

//	The source need to be constant during the concatenation.