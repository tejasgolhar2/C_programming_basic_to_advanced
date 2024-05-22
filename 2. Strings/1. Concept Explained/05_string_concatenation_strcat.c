#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name[30]="Tejas ";
	char surname[30]="Golhar";

	// Argument 1 - Destination and Argument 2 - Source
	// The function returns the pointer to the destination string
	strcat(name,surname);

	// After the use of the function, the respective changes have been done
	// Let's see what happened

	printf("%s",name);  
	return 0;
}

/*

NOTE:
     Drawback: 	Overflow Buffer -- The function doesn't check for the size of the destination 
     		and overwrites the content of source beyond the size (if present so)
*/