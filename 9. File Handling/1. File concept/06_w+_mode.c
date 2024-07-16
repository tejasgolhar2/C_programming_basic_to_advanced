#include<stdio.h>
#include<stdlib.h>

int main()
{

	//	w+  ->>  WRITE & READ both, primarily WRITE

    //  Erase previous content 	->	 WRITES FROM START OF FILE	->  truncate file length to ZERO
    //  New file created when file not found
	//	Can't read previous content, fresh written content can only READ.
	//	Returns NULL, When failed to open file.

    //  USE CASE: CLEAR FILE CONTENT TO WRITE NEW.


    FILE* fptr = NULL;

    fptr = fopen("file.txt", "w+");				//	FILE CONTENT CLEARED
    if (fptr ==  NULL)
    {
    	printf("Opening file error !");
    	exit(1);
    }


    //	WRITE CONTENT
    char ch[15];
    printf("Enter string value:\n");
    scanf("%14s", ch);
    fputs(ch, fptr);

    						//	POINTER IS AT THE EOF
    rewind(fptr);			//	MOVE CURSOR BACK TO THE START of the FILE


    //	READ CONTENT
    char ch2;
    printf("\nFile Content:\n");
    while(!feof(fptr))
    {
    	ch2 = fgetc(fptr);
    	printf("%c", ch2 );
    }


    fclose(fptr);
	return 0;
}