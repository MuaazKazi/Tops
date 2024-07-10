//WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);

    if(num > 0)
    {
        printf("num is positive");
    }
   else if(num < 0)
    {
        printf("num is negative");
    }
    else{
        printf("number is 0");
    }
}