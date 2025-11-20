#include <stdio.h>

int main()
{
    int n, original, reversed = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;   // store the original number

    while (n != 0)
    {
        rem = n % 10;              // get last digit
        reversed = reversed * 10 + rem; // build the reversed number
        n = n / 10;                // remove last digit
    }

    if (original == reversed)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);

    return 0;
}
