//compound intrest
#include <stdio.h>
#include<math.h>

int main() {
    
    float principle, rate, time, n, CI, A;

    printf("Enter the principal amount: ");
    scanf("%f", &principle);

    printf("Enter the annual interest rate (e.g., for 5%%, enter 5): ");
    scanf("%f", &rate);

    rate = rate / 100;

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the number of times that interest is compounded annually: ");
    scanf("%f", &n);

    A = principle * pow((1 + rate / n), n * time);

    CI = A - principle;

    printf("The compound interest is: %.2f\n", CI);

    return 0;
} 