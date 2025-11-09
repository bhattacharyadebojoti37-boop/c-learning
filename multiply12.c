#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Multiply the numbers
    result = num1 * num2;

    // Display the result
    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);

    return 0;
}