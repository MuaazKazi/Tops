//    *
//   ***
//  *****
// *******
//*********
#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 0; i < rows; i++) {
        for (j = i; j < rows - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
 