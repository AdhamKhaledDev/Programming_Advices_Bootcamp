#include <stdio.h>

int main() {
    float num1, num2, temp;

    // take inputs
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // print original numbers
    printf("Original numbers: %.2f and %.2f\n", num1, num2);

    // swap numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    // print swapped numbers
    printf("Swapped numbers: %.2f and %.2f\n", num1, num2);

    return 0;
}
