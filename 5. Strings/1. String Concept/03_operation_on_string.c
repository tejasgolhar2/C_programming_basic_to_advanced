#include<stdio.h>

int main()
{
	char *ptr = "Hello";

	//	ACCESS FIRST CHARACTER
	printf("%c %c\n", *ptr, "Hello"[0]);   

	//	ACCESS LAST CHARACTER
	printf("Null Character: %c\n", "Hello"[5]);   

	return 0;
}

//	STRING NAME  -> Pointer to the first character.

//	String characters are read-only. Cannot modified by de-referencing

//	ACCESS BY - 		string_name[index]