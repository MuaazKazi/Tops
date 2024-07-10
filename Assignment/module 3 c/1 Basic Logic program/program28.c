//Convert years into days and months
#include <stdio.h>
int main() {
    int years, months, days;
    printf("Enter number of years: ");
    scanf("%d", &years);
    months = years * 12;
    days = months * 30;
    printf("total months and days\n%d %d", months, days);
    return 0;
}