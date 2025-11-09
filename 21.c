#include <stdio.h>   // For input/output functions

int main() {
    int C, D, temp;   // Declare three integer variables

    // Step 1: Input two numbers from the user
    printf("Enter value for C: ");
    scanf("%d", &C);

    printf("Enter value for D: ");
    scanf("%d", &D);
    // Step 2: Display values before swapping
    printf("\nBefore swapping:\n");
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    // Step 3: Swap the values using a temporary variable
    temp = C;   // Store value of C in temp
    C = D;      // Assign value of D to C
    D = temp;   // Assign temp (old C) to D

    // Step 4: Display values
