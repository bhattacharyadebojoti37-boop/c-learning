#include <stdio.h>

int main()
{
    int n, i = 1;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("\nOdd numbers from 1 to %d are:\n", n);

    // While loop to print odd numbers
    while(i <= n)
    {
        if(i % 2 != 0)   // Check if number is odd
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
