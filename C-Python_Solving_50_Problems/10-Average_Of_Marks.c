#include <stdio.h>

int main() {
    float mark1, mark2, mark3, avg;

    // take inputs
    printf("Enter first mark: ");
    scanf("%f", &mark1);
    printf("Enter second mark: ");
    scanf("%f", &mark2);
    printf("Enter third mark: ");
    scanf("%f", &mark3);

    // calculate average
    avg = (mark1 + mark2 + mark3) / 3;

    // display result
    printf("The average of marks %.2f, %.2f, and %.2f is %.2f", mark1, mark2, mark3, avg);

    return 0;
}
