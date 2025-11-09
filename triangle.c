#include <stdio.h>

int main() {
    float angle1, angle2, angle3, sum;

    // Input three angles of the triangle
    printf("Enter three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Calculate the sum of angles
    sum = angle1 + angle2 + angle3;

    // Check if triangle is valid
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
