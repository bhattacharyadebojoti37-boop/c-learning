#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n", num);
    } 
    else if (num % 5 == 0) {
        printf("%d is divisible by 5 but not by 11.\n", num);
    } 
    else if (num % 11 == 0) {
        printf("%d is divisible by 11 but not by 5.\n", num);
    } 
    else {
        printf("%d is not divisible by 5 or 11.\n", num);
    }

    return 0;
}
