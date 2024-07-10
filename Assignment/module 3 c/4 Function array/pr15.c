//Perform 2D matrix array
#include<stdio.h>
int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix[3][3];
    
    printf("Elments of matrix");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            matrix[i][j]=arr[i][j];
            printf("%d \t",matrix[i][j]);
        }
    } 
    return 0;
}