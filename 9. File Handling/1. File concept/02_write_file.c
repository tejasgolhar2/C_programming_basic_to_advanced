#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch[20];

    FILE* ptr;                                      //  Declare File Pointer

    ptr = fopen("file.txt", "w");                   //  Initialise File Pointer
                                                    //  CREATES NEW FILE -> WHEN FILE NOT FOUND
    if (ptr == NULL)
    {
    	printf("Process cannot completed !");
    	exit(1);
    }

    printf("Enter a string:\n");
    gets(ch);

    fputs(ch, ptr);						    //	PASS CONTENT TO FILE

    fclose(ptr);								    //	CLOSE FILE

	return 0;
}




//  OPTIONAL OUTPUT METHODS 

//  fputs(ch, ptr);

//  fprintf(ptr,"%s", ch);

//  for(int i  = 0; i < strlen(ch); i++)
//    {
//        fputch(ch[i] , ptr);
//    }