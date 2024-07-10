//1 2 3 6 9 18 27 54
#include <stdio.h>

int main() {
    int num1=1,num2=2,n=10;
    printf("%d %d ", num1,num2);
    
    for (int i = 3; i <= n; i++) { 
       if(i%2==1){
        num1=num1*3;
        printf("%d ",num1);
       }
       
       else{
        num2=num2*3;
        printf("%d ",num2);
        
       }
       }
    return 0;
}