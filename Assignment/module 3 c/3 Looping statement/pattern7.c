//  1   2   3   4   5   6   7   8   9  10 
//  36  37  38  39  40  41  42  43  44  11 
//  35  64  65  66  67  68  69  70  45  12 
//  34  63  84  85  86  87  88  71  46  13 
//  33  62  83  96  97  98  89  72  47  14 
//  32  61  82  95 100  99  90  73  48  15 
//  31  60  81  94  93  92  91  74  49  16 
//  30  59  80  79  78  77  76  75  50  17 
//  29  58  57  56  55  54  53  52  51  18 
//  28  27  26  25  24  23  22  21  20  19
#include <stdio.h>
#define SIZE 10

void printSpiral(int n) {
    int arr[SIZE][SIZE];
    int num = 1;
    int top = 0, bottom = SIZE - 1, left = 0, right = SIZE - 1;
    
    while (num <= n * n) {
        // Traverse right
        for (int i = left; i <= right && num <= n * n; i++) {
            arr[top][i] = num++;
        }
        top++;
        
        // Traverse down
        for (int i = top; i <= bottom && num <= n * n; i++) {
            arr[i][right] = num++;
        }
        right--;
        
        // Traverse left
        for (int i = right; i >= left && num <= n * n; i--) {
            arr[bottom][i] = num++;
        }
        bottom--;
        
        // Traverse up
        for (int i = bottom; i >= top && num <= n * n; i--) {
            arr[i][left] = num++;
        }
        left++;
    }
    
    // Print the spiral
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 10; // Size of the spiral (10x10)
    printSpiral(n);
    return 0;
}
