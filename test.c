#include <stdio.h>

int main() {
    int num;

    // Get input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check whether the number is even or odd
    if (num % 2 == 0) {
        printf("%d is an Even number.\n", num);
    } else {
        printf("%d is an Odd number.\n", num);
    }

    return 0;
}

