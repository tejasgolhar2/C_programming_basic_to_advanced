#include<stdio.h>
#include<stdlib.h>

int main()
{
    //	r+  ->>  READ & WRITE both, primarily READ

    //  File Pointer points at the START of the file.
    //  Writing doesn't erase previous content, WRITES FROM START OF FILE
    //  No new file created when file not found
    //  Returns NULL when failed to open file. 


    //  USE CASE: PRIMARILY USED TO MODIFY FILES


    FILE* ptr = NULL;

   	ptr = fopen("file.txt","r+");
   	if (ptr == NULL)
   	{
   		printf("Opening File Error\n");
   		exit(1);
   	}

   	
   	//	Write Content
   	char str[15];
   	printf("Enter string:\n");
   	gets(str);
   	fputs(str, ptr);                //  WRITES FROM START OF FILE

   	fclose(ptr);

	return 0;
}


//  Read Content
/*
    char ch;
    while(!feof(ptr))
    {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
*/