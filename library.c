/*A program to calculate the fine rate and fine amount for books overdue in a library
Authour: Genesis Otieno
REG NO:CT101/G/24052/24*/
#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);

    printf("Enter Due Date (as integer): ");
    scanf("%d", &dueDate);

    printf("Enter Return Date (as integer): ");
    scanf("%d", &returnDate);

    daysOverdue = returnDate - dueDate;

    if(daysOverdue <= 7) {
        fineRate = 20;
    } else if(daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: %.2f\n", fineRate);
    printf("Fine Amount: %.2f\n", fineAmount);

    return 0;
}
