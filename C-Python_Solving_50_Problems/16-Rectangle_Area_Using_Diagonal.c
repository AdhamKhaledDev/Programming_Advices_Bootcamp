#include <stdio.h>
#include <math.h>

int main() {
    float a, d, area;

    // take inputs
    printf("Enter the length of one side of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the length of the diagonal of the rectangle: ");
    scanf("%f", &d);

    // calculate area
    area = a * sqrt(d*d - a*a);

    // display result
    printf("The area of the rectangle is %.3f", area);

    return 0;
}
