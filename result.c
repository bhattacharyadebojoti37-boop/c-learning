#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, percentage;

    // Input marks for 5 subjects
    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    // Display percentage
    printf("Percentage = %.2f%%\n", percentage);

    // Determine division
    if (percentage >= 60)
        printf("First Division\n");
    else if (percentage >= 50)
        printf("Second Division\n");
    else if (percentage >= 40)
        printf("Third Division\n");
    else
        printf("Fail\n");

    return 0;
}
