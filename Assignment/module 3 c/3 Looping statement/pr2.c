//WAP to accept 5 numbers from user and display all numbers.
#include <stdio.h>

int main() {
    int num;

    printf("Enter five numbers:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        printf("You entered: %d\n", num);
    }

    return 0;
}