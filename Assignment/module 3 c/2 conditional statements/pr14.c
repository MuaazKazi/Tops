//find the largest of three numbers.
#include<stdio.h>
int main() {
    int num1,num2,num3,max;
    printf("Enter a number:");
    scanf("%d %d %d",&num1,&num2,&num2);
    if(num1>=num2 && num1>=num3)
    {
        printf("Max = num1");
}
else if(num2>=num1 && num2>=num3)
{
    printf("Max = num2");
}
else{
    printf("Max = num3");
}
return 0;
}
