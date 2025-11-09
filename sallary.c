#include <stdio.h>

int main() {
    float basic, HRA, DA, gross;

    // Input basic salary from user
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basic);

    // Check condition and calculate HRA, DA
    if (basic < 1500) {
        HRA = 0.10 * basic;  // 10% of basic
        DA = 0.90 * basic;   // 90% of basic
    } 
    else {
        HRA = 500;           // fixed Rs. 500
        DA = 0.98 * basic;   // 98% of basic
    }

    // Calculate gross salary
    gross = basic + HRA + DA;

    // Display result
    printf("Gross Salary = Rs. %.2f\n", gross);

    return 0;
}
