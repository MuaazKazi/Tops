//Store 5 numbers in array and sort it in ascending order
#include <stdio.h>
int main () {
    int arr[]={1,7,3,34,5};
    int temp;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++)
        if (arr[i]<arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
    }
    }
    printf("Sorted array:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}