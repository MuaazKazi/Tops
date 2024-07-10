//simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main ()
{
    char operators;
    int num1,num2,result;
    printf("enter operators(+,-,*,/,%%)");
    scanf("%c",&operators);

    printf("enter a number:");
    scanf("%d %d",&num1,&num2);

    if(operators =='+')
    {
        result = num1 + num2;
        printf("result %2d",result);
    }
    else if(operators =='-')
    {
        result = num1 - num2;
        printf("result %2d",result);
    }
    else if(operators =='*')
    {
        result = num1 * num2;
        printf("result %2d",result);
    }
      else if(operators =='/')
    {
        result = num1 / num2;
        printf("result %2d",result);
    }
      else if(operators =='%')
    {
        result = num1 % num2;
        printf("result %2d",result);
    }
    

    return 0;

    
}