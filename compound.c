/*A program to calculate the compound intrest
Authour: Genesis Otieno
REG NO:CT101/G/24052/24*/
#include <stdio.h>
#include <math.h>
int main() {
float amount , principle , rate , number , time;
printf("Please enter the principle amount\n");
scanf("%f",&principle);
printf("Please enter the rate\n");
scanf("%f",&rate);
printf("Please enter number of times the interest is compounded per year\n");
scanf("%f",&number);
printf("Please enter the number of years inversted\n");
scanf("%f",&time);
rate=rate/100;
amount = principle * pow((1 + rate / number), number * time);
printf("Your final amount is %f\n",amount);
return 0;
}