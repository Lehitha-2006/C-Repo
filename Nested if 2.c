#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if to find the maximum number
    if (a >= b) {  // Check if a is greater than or equal to b
        if (a >= c) {  // If a is greater than or equal to c
            printf("The maximum number is %d\n", a);
        } else {  // If a is less than c
            printf("The maximum number is %d\n", c);
        }
    } else {  // If b is greater than a
        if (b >= c) {  // If b is greater than or equal to c
            printf("The maximum number is %d\n", b);
        } else {  // If b is less than c
            printf("The maximum number is %d\n", c);
        }
    }

    return 0;
}

