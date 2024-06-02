#include <stdio.h>
#include <conio.h> 
// For getch() - This header may be specific to certain compilers/IDEs (e.g., Turbo C)

int main() {
    char ch;

    
    ch = getch();       // Read single character without displaying on the screen and immediately 
                        //  the next line would be executed

    printf("\nYou entered: %c", ch);

    getch();            // this holds the output screen until user press any key
}
