//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include <stdio.h>

int main() {
    int number, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Find the maximum digit
    int temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        temp /= 10;
    }

    printf("The maximum digit in %d is: %d\n", number, maxDigit);

    return 0;
}

