#include <stdio.h>

int main()
{
    int n, i = 1, j;

    // Input from user
    printf("Enter the number up to which tables are to be displayed: ");
    scanf("%d", &n);

    // Outer loop for each table
    while(i <= n)
    {
        printf("\nMultiplication Table of %d\n", i);
        printf("--------------------------\n");

        j = 1;
        // Inner loop to print 10 rows for each table
        while(j <= 10)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        i++; // Move to next table
    }

    return 0;
}
