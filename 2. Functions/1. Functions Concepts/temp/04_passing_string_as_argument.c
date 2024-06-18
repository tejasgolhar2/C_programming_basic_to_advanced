#include<stdio.h>
#include<conio.h>


void display(char* , char*);   		//  The base address of the character array is stored in a pointer variable	


int length(char*);


int main()
{
	char str1[] = "Tejas";			// Strigs are character arrays
	char str2[] = "Golhar";

	display(str1, str2);			// Passed the base address of the arrays
	
	printf("Length of first string: %d\n", length(str1));
	printf("Length of second string: %d\n", length(str2));
	return 0;
}


void display(char string1[], char string2[])
{
	printf("Passed strings: %s %s\n", string1, string2);
}


int length(char array[])
{
	int i = 0;
	int len = 0;

	while(array[i] != '\0')			// Since, '\0' represents the Null Character present at the end of every string
 	{
		len += 1;
		i += 1;
	}

	return len;
}