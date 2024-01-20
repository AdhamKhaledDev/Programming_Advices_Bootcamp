#include <stdio.h>

int main() {
    // Step 1: Ask the user to enter his/her age
    int age;
    printf("Step 1: Enter your age: ");
    scanf("%d", &age);

    // Step 2: Ask the user if he/she has a driver license
    char hasDriverLicense;
    printf("Step 2: Do you have a driver license? (Y/N): ");
    scanf(" %c", &hasDriverLicense);

    // Step 3: Result = (Age > 21 and HasDriverLicense=True)
    int result = (age > 21 && (hasDriverLicense == 'Y' || hasDriverLicense == 'y'));

    // Step 4: Check if result is True then Hire, otherwise Reject
    // Step 5: Print "Hired" or "Rejected" accordingly
    if (result) {
        printf("Step 4 & 5: Hired\n");
    } else {
        printf("Step 4 & 5: Rejected\n");
    }

    return 0;
}
