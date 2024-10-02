/*A program to calculate simple intrest
Author: Genesis Otieno
Reg no: CT101/G/24052/24*/
#include <stdio.h>
int main(){
float principle_amount;
float time;
float rate;
printf("Enter the principle amount\n");
scanf("%f",&principle_amount);
printf("Please enter the time for invest\n");
scanf("%f",&time);
printf("please enter the rate\n");
scanf("%f",&rate);
float simple_intrest;
simple_intrest = (principle_amount*time*rate)/100;
printf("You simple Intrest is %.2f",simple_intrest);
    return 0;
}