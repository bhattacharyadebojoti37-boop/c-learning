#include <stdio.h>

int main()
{
    float units, amount, surcharge, tax, total;

    // Input number of units consumed
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    // Calculate bill according to given slabs
    if (units <= 50)
        amount = units * 0.50;
    else if (units <= 150)
        amount = (50 * 0.50) + ((units - 50) * 0.75);
    else if (units <= 250)
        amount = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    else
        amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);

    // Add 20% fuel surcharge
    surcharge = amount * 0.20;

    // Add 10% government tax
    tax = amount * 0.10;

    // Total bill
    total = amount + surcharge + tax;

    // Display results
    printf("\nElectricity Bill Details:\n");
    printf("---------------------------\n");
    printf("Energy Charges      : Rs. %.2f\n", amount);
    printf("Fuel Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Govt. Tax (10%%)     : Rs. %.2f\n", tax);
    printf("---------------------------\n");
    printf("Total Bill Amount   : Rs. %.2f\n", total);

    return 0;
}
