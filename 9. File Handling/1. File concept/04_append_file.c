#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE* fptr;									//	DECLARE POINTER

    fptr = fopen("file.txt","a");				//	APPEND MODE -> Add content from end of previous content.
    if(fptr ==  NULL)                           //  CREATE NEW FILE AND OPEN, WHEN NOT FOUND
                                                //  RETURNS NULL, WHEN FAILED
    {
    	printf("Error Opening File\n");
    	exit(1);
    }

    

    char ch[20];
    printf("Enter the string to be appeneded:\n");	
    gets(ch);										//	GET INPUT

    fprintf(fptr, "\n%s\n", ch);					//	FORMATTED INPUT

    fclose(fptr);

	return 0;
}

//  fputs(ch, fptr);							//	UNFORMATTED INPUT
//  fprintf(fptr, "\n%s\n", ch);				//	FORMATTED INPUT
//  for(int i  = 0; i < strlen(ch); i++)
//    {
//        fputch(ch[i] , ptr);
//    }