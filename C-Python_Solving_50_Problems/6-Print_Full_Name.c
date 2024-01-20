#include <stdio.h>

int main() {
    // Step 1: Ask the user to enter a FirstName
    char firstName[50];
    printf("Step 1: Enter your First Name: ");
    scanf("%s", firstName);

    // Step 2: Ask the user to enter a LastName
    char lastName[50];
    printf("Step 2: Enter your Last Name: ");
    scanf("%s", lastName);

    // Step 3: FullName = FirstName + " " + LastName
    char fullName[100];  // Assuming a maximum full name length of 100 characters
    snprintf(fullName, sizeof(fullName), "%s %s", firstName, lastName);

    // Step 4: Print a greeting
    printf("Step 3 & 4: Honored to meet you, %s\n", fullName);

    return 0;
}
