#include <stdio.h>
#include <conio.h> // For getch() - This header may be specific to certain compilers/IDEs (e.g., Turbo C)

int main() {
    char ch;

    printf("Enter a character: ");
    ch = getch(); // Read a character without displaying it on the screen

    // the character entered wont be echoed (displayed) on the screen and immediately the next line would be executed

    printf("\nYou entered: %c\n", ch);

    return 0;
}
