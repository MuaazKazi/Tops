//Check Number Is Positive or Negative
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
        printf("you entered 0");
    }
    return 0;
}