#include <stdio.h>

int main() {
    float num1, num2, num3, sum;

    // take inputs
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    // add three numbers
    sum = num1 + num2 + num3;

    // displaying the adding result
    printf("The sum of numbers %f + %f + %f = %f", num1, num2, num3, sum);

    return 0;
}
