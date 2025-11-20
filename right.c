#include <stdio.h>

int main()
{
    int num, temp, rev = 0, digit;

    // Input from user
    printf("Enter an integer number: ");
    scanf("%d", &num);

    temp = num;

    printf("\nDigits from right to left:\n");
    // Display digits from right to left
    while(temp > 0)
    {
        digit = temp % 10;
        printf("%d ", digit);
        rev = rev * 10 + digit;  // Store reverse number
        temp = temp / 10;
    }

    printf("\n\nDigits from left to right:\n");
    // Display digits from left to right (by reversing again)
    while(rev > 0)
    {
        digit = rev % 10;
        printf("%d ", digit);
        rev = rev / 10;
    }

    return 0;
}
