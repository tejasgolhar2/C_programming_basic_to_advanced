#include <stdio.h>
#include <stdlib.h>

int main()
{
	// file pointer variable to store the value returned by
	// fopen
	FILE* fptr;

	// opening the file in read mode
	fptr = fopen("file.txt", "r");

	// checking if the file is opened successfully
	if (fptr == NULL) 
	{
		printf("The file is not opened. The program will "
		"now exit.");
		exit(0);
	}
	printf("File opened successfully ..\n");
	fclose(fptr);

	return 0;
}