#include <stdio.h>

int main()
{
    int n, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;      // get the last digit
        sum = sum + rem;   // add it to sum
        n = n / 10;        // remove the last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
