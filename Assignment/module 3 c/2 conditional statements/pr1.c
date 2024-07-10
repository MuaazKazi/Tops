//accept 2 integer and check they are equal or not
#include<stdio.h>
int main() {
int num1,num2;
printf("enter number:");
scanf("%d %d",&num1,&num2);

if(num1==num2)
{
    printf("both number are equal");
}
else
{
    printf("numbers are not equal");
}
return 0;
}