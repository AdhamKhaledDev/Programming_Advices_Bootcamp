#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >= 18 && age <= 45) {
        printf("Valid Age\n");
    } else {
        printf("Invalid Age\n");
    }
    
    return 0;
}

