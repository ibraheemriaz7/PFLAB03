#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // clear leftover newline from input buffer

    printf("Enter your city: ");
    fgets(city, 50, stdin);

    printf("\nName: %s", name);
    printf("Age: %d\n", age);
    printf("City: %s", city);

    return 0;
}
