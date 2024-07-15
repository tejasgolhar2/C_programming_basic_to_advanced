#include<stdio.h>

int main()
{
    char ch[20];

    FILE *ptr = fopen("file.txt", "w");

    if (ptr == NULL )
    {
    	printf("Process cannot completed !");
    	return 0;
    }

    printf("Enter a string:\n");
    scanf("%20s", ch);


    fprintf(ptr,"%s", ch);						//	PASS CONTENT TO FILE

//  fputs(ch, ptr);
//  for(int i  = 0; i < strlen(ch); i++)
//    {
//        fputch(ch[i] , ptr);
//    }

    fclose(ptr);								//	CLOSE FILE


	return 0;
}

//	Case for Writing into File:

//	CASE 1:	THE FILE ALREADY EXIST   ->  CLEAR CONTENT AND OVERWRITE THE FILE
//	CASE 2:	THE FILE DOESN'T EXIST   ->  CREATE A NEW FILE and Write into it