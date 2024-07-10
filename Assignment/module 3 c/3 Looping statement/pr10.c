//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include<stdio.h>
int main() {
    int number, firstDigit, lastDigit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);
    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    lastDigit = number % 10;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}

