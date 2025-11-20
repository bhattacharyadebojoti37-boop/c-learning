#include <stdio.h>

int main()
{
    int n, i = 1;
    long long fact = 1;   // long long used for large factorial values

    printf("Enter a number: ");
    scanf("%d", &n);

    // check if number is negative
    if (n < 0)
        printf("Factorial of negative number doesn't exist.\n");
    else
    {
        while (i <= n)
        {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
