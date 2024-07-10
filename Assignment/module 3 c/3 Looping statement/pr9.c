//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        sum += remainder; 
        num = num / 10; 
    }
    printf("Sum of digits: %d\n", sum);

    return 0;
}