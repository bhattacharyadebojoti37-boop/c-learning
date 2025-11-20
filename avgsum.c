#include <stdio.h>

int main() {
    int i, num;
    int sum = 0;
    float avg;

    printf("Enter 10 numbers:\n");

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);
        sum = sum + num;
    }

    avg = sum / 10.0;

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
