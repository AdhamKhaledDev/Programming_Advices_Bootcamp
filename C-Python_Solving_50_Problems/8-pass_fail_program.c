#include <stdio.h>

int main() {
    // Step 1: Ask the user to enter Mark
    int mark;
    printf("Step 1: Enter your mark: ");
    scanf("%d", &mark);

    // Step 2: If Mark >= 50, PASS, otherwise Fail
    if (mark >= 50) {
        // Step 3: Print PASS
        printf("Step 2 & 3: PASS\n");
    } else {
        // Step 3: Print Fail
        printf("Unfortunately Fail\n");
    }

    return 0;
}
