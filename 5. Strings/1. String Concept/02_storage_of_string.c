#include<stdio.h>

int main()
{
	char name[7] = "SPIDER";		//	CHARACTER ARRAY --> NOT A STRING LITERAL (VALUES CAN CHANGED)
	printf("%s", name );

	return 0;
}

//	STRING NAME  -> Pointer to the first character.

//	STORAGE  -->>   "an array of characters".

//	String follows'\0' OR "NULL Character" that determines the end of the string.

//	NUMBER OF CHARACTERS IN STRING = SIZE OF STRING - 1 NULL CHARACTER

