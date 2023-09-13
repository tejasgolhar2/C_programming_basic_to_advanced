#include <stdio.h>
#include <conio.h> 
// For getch() - This header may be specific to certain compilers/IDEs (e.g., Turbo C)

void main() {
    char ch;

    printf("Enter a character: ");
    ch = getch(); 
    // Read a character without displaying it on the screen

    //      The character entered wont be echoed (displayed) on the screen and immediately 
    //  the next line would be executed

    printf("\nYou entered: %c\n", ch);

    getch();  // this holds the output screen until user presses any key
}
