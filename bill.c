#include <stdio.h>

int main() {
    float units, bill, total_bill, surcharge, tax;

    // Input the number of units consumed
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Calculate bill based on units
    if (units <= 50)
        bill = units * 0.50;
    else if (units <= 150)
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    else if (units <= 250)
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    else
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);

    // Calculate surcharge (20%) and government tax (10%)
    surcharge = 0.20 * bill;
    tax = 0.10 * bill;

    // Calculate total bill
    total_bill = bill + surcharge + tax;

    // Display the result
    printf("Electricity Bill Details:\n");
    printf("Base Bill Amount = Rs. %.2f\n", bill);
    printf("Fuel Surcharge (20%%) = Rs. %.2f\n", surcharge);
    printf("Government Tax (10%%) = Rs. %.2f\n", tax);
    printf("Total Bill = Rs. %.2f\n", total_bill);

    return 0;
}
