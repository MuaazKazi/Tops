//convert days into months
#include <stdio.h>
int main() {
    int days;
    float months;
    printf("Enter number of days: ");
    scanf("%d", &days);
    months = days / 30.0;
    printf("Approximately %.2f months\n", months);
    return 0;
}