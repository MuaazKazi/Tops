//program to make simple calculatotr
#include<stdio.h>
int main(){
    int num1,num2,addition,subtraction,multiplication,division,modulo;
    printf("Enter number");
    scanf("%d %d",&num1,&num2);
    addition=num1+num2;
    subtraction=num1-num2;
    multiplication=num1*num2;
    modulo=num1%num2;
    printf("Addition is:%d",addition);
    printf("subtraction is:%d",subtraction);
    printf("multiplication is:%d",multiplication);
    printf("division is:%d",division);
    printf("modulo is:%d",modulo);
return 0;
}