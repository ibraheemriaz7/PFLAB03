#include <stdio.h>

int main() {
    char fullName[50];

    printf("Enter your full name: ");
    fgets(fullName, 50, stdin); // safer alternative to gets()

    printf("\nHello,\n");
    puts(fullName); // puts() adds a newline automatically

    return 0;
}
