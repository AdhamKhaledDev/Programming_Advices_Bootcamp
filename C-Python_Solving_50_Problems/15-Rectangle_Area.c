#include <stdio.h>

int main() {
    float a, b, area;

    // take inputs
    printf("Enter length of rectangle: ");
    scanf("%f", &a);
    printf("Enter width of rectangle: ");
    scanf("%f", &b);

    // calculate area
    area = a * b;

    // display result
    printf("The area of the rectangle is %.2f", area);

    return 0;
}
