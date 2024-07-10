//WAP to find factorial using recursion
#include<stdio.h>
int factorial(int num);

int main(){
    int num,fact;
    printf("Enter a number:");
    scanf("%d",&num);
    fact = factorial(num);
    printf("Factorial of %d = %d",num,fact);

    return 0;
}

int factorial(int num)
{
    int fact;
    if(num == 0){
        return 1;
    }
    else{
        fact = num * factorial(num-1); // Corrected the function call
        return fact;
    }
}
