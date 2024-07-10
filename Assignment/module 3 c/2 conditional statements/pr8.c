//WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>
int main() {
    int height_cm;
    
    printf("Enter height in centimeters: ");
    scanf("%d", &height_cm);
    if (height_cm < 150.0) {
        printf("Person is Short\n");
    } else if (height_cm >= 150.0 && height_cm < 170.0) {
        printf("Person is Average\n");
    } else if (height_cm >= 170.0 && height_cm < 190.0) {
        printf("Person is Tall\n");
    } else {
        printf("Person is Very Tall\n");
    }

    return 0;
}