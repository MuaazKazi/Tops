/*.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P */
#include<stdio.h>
#include <math.h>
int main() {
    float principle, rate, time,CI, A;
    printf("Enter the amount: ");
    scanf("%f", &principle);

    printf("Enter the annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    A = principle * pow((1 + rate / 100),time);
    printf("The amount is: %.2f\n",A);

    CI = A - principle;

    printf("The compound interest is: %.2f\n", CI);
    return 0;
}