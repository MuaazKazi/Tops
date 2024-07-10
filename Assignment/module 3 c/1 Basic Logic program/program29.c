//Convert minutes into seconds and hours
#include <stdio.h>
int main() {
    int minutes, hours, seconds;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    seconds = minutes % 60 * 60;
    printf("total no of hour and seconds is\n%d %d", hours, seconds);
    return 0;
}