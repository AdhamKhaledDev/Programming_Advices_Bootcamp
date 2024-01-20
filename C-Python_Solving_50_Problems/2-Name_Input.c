#include <stdio.h>

int main() {
    char name[50];  // Assuming a maximum name length of 50 characters

    // Ask the user to enter their name and print it on the screen
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is: %s\n", name);
    
    return 0;
}
