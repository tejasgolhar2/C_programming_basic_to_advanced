#include<stdio.h>
#include<ncurses.h>

int main()
{

    // Use of "getchar" function to get a single character as input

    // char ch1;
    // printf("Enter a character 1 value ");
    // ch1 = getchar();
    // printf("%c",ch1);

/*      Here, if entered more than one characters, then among them only a single 
    character [the first among the entered] will be printed to the console.
*/

    //printing the ASCII value of the entered character

    char ch2;
    printf("Enter a character 2 value ");
    ch2 = getchar();
    printf("Its corresponding ASCII Value is %d\n",ch2); //---->>> formatted specifier is changed
    return 0;
}