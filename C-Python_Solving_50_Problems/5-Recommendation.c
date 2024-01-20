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

    // Step 3: Ask the user if he/she has a recommendation
    char hasRecommendation;
    printf("Step 3: Do you have a recommendation? (Y/N): ");
    scanf(" %c", &hasRecommendation);

    // Step 4: Result = (Age > 21 and HasDriverLicense=True) or HasRecommendation=True
    int result = (age > 21 && (hasDriverLicense == 'Y' || hasDriverLicense == 'y')) || (hasRecommendation == 'Y' || hasRecommendation == 'y');

    // Step 5: Check if result is True then Hire, otherwise Reject
    // Step 6: Print "Hired" or "Rejected" accordingly
    if (result) {
        printf("Step 5 & 6: Hired\n");
    } else {
        printf("Step 5 & 6: Rejected\n");
    }

    return 0;
}
