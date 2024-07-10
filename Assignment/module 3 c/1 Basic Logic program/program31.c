//convert kilometer into meter
#include <stdio.h>
int main() {
    int kilometer,meter;
    printf("Enter kilometer:");
    scanf("%d", &kilometer);
    meter = kilometer*1000;
    printf("Approximately %d meter\n", meter);
    return 0;
}