/*A program to show eligibility of a loan
Authour: Genesis Otieno
REG NO:CT101/G/24052/24*/
#include <stdio.h>

int main() {
    int age;
    float income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    if(age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
