#include<stdio.h>
#include<stdlib.h>

int main()
{
    //	a+  ->  Add content from end of previous content, BOTH READ & APPEND
    
    //  Create new file and open, when file not found.
    //  Returns NULL, when unable to open file.
    //  USED to Modify the file AND READ the file
 
    FILE* ptr =  NULL;

    ptr = fopen("file.txt", "a+");
    if (ptr ==  NULL)
    {
        printf("Error opening the file !");
        exit(1);
    }

    //  READ previous FILE CONTENT
    char ch1;
    while(!feof(ptr))
    {
        ch1 = fgetc(ptr);
        printf("%c", ch1);
    }

    // APPEND TO THE END
    char str[20];
    printf("\nEnter appendable string:\n");
    scanf("%19s", str);
    fputs(str, ptr);

    //  Move pointer to the start of the file
    rewind(ptr);

    //  READ modified FILE CONTENT
    char ch2;
    while(!feof(ptr))
    {
        ch2 = fgetc(ptr);
        printf("%c", ch2);
    }

    fclose(ptr);

	return 0;
}