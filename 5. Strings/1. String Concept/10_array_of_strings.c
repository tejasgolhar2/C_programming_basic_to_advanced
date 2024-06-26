#include<stdio.h>
#include<string.h>

int main()
{
    //	Approach 1

    char strings[][15] = {"2 Pencils", "1 Eraser", "2 Pens", "1 Stapler"};
    //	all the rest array spaces are filled with NULL Character

    printf("%s\n", strings[3]);
    

    //	Approach 2

    char *str[] =  {"2 Pencils", "1 Eraser", "2 Pens", "1 Stapler"};

   printf("%s\n", str[1]);

	return 0;
}