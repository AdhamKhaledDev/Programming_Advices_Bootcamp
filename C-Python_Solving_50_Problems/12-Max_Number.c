#include <stdio.h>

int main() {
    float num1, num2, max_num;

    // take inputs
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // find maximum
    max_num = num1 > num2 ? num1 : num2;

    // display result
    printf("The maximum of %.2f and %.2f is %.2f", num1, num2, max_num);

    return 0;
}
