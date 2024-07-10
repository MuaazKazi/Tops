//WAP to print factorial of given numbers
#include<stdio.h>
int main()
{
    int num,factorial=1,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;++i){
        factorial*=i;
    }
    printf("factorial of %d is %d \n",num,factorial);

    return 0;

}
