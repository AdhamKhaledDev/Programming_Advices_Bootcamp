#include <stdio.h>

int main() {
    float num1, num2, num3, max_num;

    // take inputs
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    // find maximum
    if (num1 > num2) {
        if (num1 > num3) {
            max_num = num1;
        } else {
            max_num = num3;
        }
    } else {
        if (num2 > num3) {
            max_num = num2;
        } else {
            max_num = num3;
        }
    }

    // display result
    printf("The maximum of %.2f, %.2f, and %.2f is %.2f", num1, num2, num3, max_num);

    return 0;
}
