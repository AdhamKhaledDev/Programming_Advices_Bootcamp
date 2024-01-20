#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd and print the result
    if (number % 2 == 0) {
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }

    return 0;
}
