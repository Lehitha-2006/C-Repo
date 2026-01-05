#include <stdio.h>
#include <string.h>
int main()
{
char num[4];
int i;
    {
    for(i = 1; i < 4; i++) {
        if (num[i] != num[0]) {
            return 0;
        }
    }
    return 1;
}

int is_sum_multiple_of_9(char *num) {
    int sum = 0;
    
    for (i = 0; i < 4; i++) {
        sum += num[i] - '0';
    }
    return sum % 9 == 0;
}

int main() {
    char num[5];
    printf("Enter a 4-digit vehicle number: ");
    scanf("%s", num);

    if (strlen(num) != 4) {
        printf("Invalid input! Please enter a 4-digit number.\n");
        return 0;
    }

    if (is_all_digits_same(num)) {
        #include <stdio.h>
#include <string.h>

int is_all_digits_same(char *num) {
    
    for (i = 1; i < 4; i++) {
        if (num[i] != num[0]) {
            return 0;  
        }
    }
    return 1;  
}

int is_sum_multiple_of_9(char *num) {
    int sum = 0;
    
    for (i = 0; i < 4; i++) {
        sum += num[i] - '0';  
    }
    return sum % 9 == 0; 
}

int main() 
{
    char num[5];
    printf("Enter a 4-digit vehicle number: ");
    scanf("%s", num);

    if (strlen(num) != 4) {
        printf("Invalid input! Please enter a 4-digit number.\n");
        return 0;
    }

    if (is_all_digits_same(num)) {
         printf("The vehicle number %s is a fancy number (all digits are the same).\n", num);
    } else if (is_sum_multiple_of_9(num)) {
        printf("The vehicle number %s is a fancy number (sum of digits is a multiple of 9).\n", num);
    } else {
        printf("The vehicle number %s is not a fancy number.\n", num);
    }

    return 0;
}







