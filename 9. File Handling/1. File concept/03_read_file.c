#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;

    FILE* ptr;                               		//  Declare File Pointer

    ptr = fopen("file.txt", "r");                   //  READ MODE ->   Read File content, file content unchanged
    												//	NO NEW FILE CREATED, WHEN not found
                                                    //  RETURNS NULL    ->   WHEN FAILED

    if (ptr == NULL)
    {
    	printf("ERROR OPENING FILE !");
    	exit(1);
    }

    //	READ CONTENT UNTIL END OF FILE
    while(!feof(ptr))
    {
    	ch = fgetc(ptr);
    	printf("%c", ch);
    }

    fclose(ptr);								    //	CLOSE FILE

	return 0;
}



//	OPTIONAL INPUT METHODS

//	while(!feof(ptr))
//	{
//		char str[14];			-> 	13 characters capacity
//		fgets(str, 7, ptr);		->  read 6 character string
//	}
