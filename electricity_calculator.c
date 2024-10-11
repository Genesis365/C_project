#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[30];
    float chargePerUnit, totalBill;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);
    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }totalBill = unitsConsumed * chargePerUnit;

     if (totalBill > 400) {
     totalBill += totalBill * 0.15;
    }
    if (totalBill < 100) {
        totalBill = 100;
    }
    printf("\nCustomer ID: %d", customerID);
    printf("\nCustomer Name: %s", customerName);
    printf("\nUnits Consumed: %d", unitsConsumed);
    printf("\nCharges per Unit: %.2f", chargePerUnit);
    printf("\nTotal Amount to Pay: Kshs. %.2f\n", totalBill);

    return 0;
}
