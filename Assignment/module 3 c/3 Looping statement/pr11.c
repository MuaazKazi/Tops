//Accept 5 names from user at run time.
#include <stdio.h>

#define MAX_NAMES 5
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    
    printf("Enter 5 names:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_LENGTH, stdin);
    }
    
    printf("\nEntered names:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%d. %s", i + 1, names[i]);
    }
    
    return 0;
}
