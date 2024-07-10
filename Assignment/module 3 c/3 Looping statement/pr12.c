//Program of Armstrong Number in C Using For Loop & While Loop.
#include<stdio.h>
int main()
{
    int sum=0,original_num,num,rem;
    printf("enter number:");
    scanf("%d",&num);
    while(num>0)
    {
    rem=num%10;
    num=num/10;
    sum=sum+rem*rem*rem;
    }
if(sum ==num){
printf("Number is amstrong\n");
}
else{
    printf("Not an amstrong number\n");
}
  printf("sum=%d\n",sum);

}
    
