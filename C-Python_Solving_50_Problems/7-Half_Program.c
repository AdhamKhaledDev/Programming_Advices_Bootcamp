#include <stdio.h>

int main() {
    // Ask the user to enter a number
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and print half of the number
    printf("Half of %d is %d\n", number, number / 2);

    return 0;
}
