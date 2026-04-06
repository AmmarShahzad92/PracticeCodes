#include <stdio.h>

int main() {
    char ch;

    // Taking input from the user
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Checking the type of character using conditional statements
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is an Uppercase Letter.\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character is a Lowercase Letter.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character is a Digit.\n");
    }
    else {
        printf("The character is a Special Symbol.\n");
    }

    return 0;
}
