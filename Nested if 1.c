#include <stdio.h>

int main() {
    int age = 20;
    int isCitizen = 1; // 1 means yes, 0 means no

    // Check if the person is eligible to vote
    if (age >= 18) {  // First condition: Check if age is 18 or more
        if (isCitizen == 1) {  // Second condition: Check if they are a citizen
            printf("You are eligible to vote.\n");
        } else {
            printf("You are not a citizen, so you can't vote.\n");
        }
    } else {
        printf("You are not old enough to vote.\n");
    }

    return 0;
}

