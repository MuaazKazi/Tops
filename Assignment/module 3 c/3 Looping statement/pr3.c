//WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h>
int main()
{
    int num;
    int even_count=0 ,odd_count=0,even_sum=0,odd_sum=0;
     printf("Enter 10 number:");
     for(int i = 0; i < 10 ;i++){
     scanf("%d",&num);
     if(num%2==0){
     even_count++;
     even_sum += num;
     }
     else {
      odd_count++;
      odd_sum+=num;
     }
     }
     printf("Number of even number are:%d\n",even_count);
     printf("Numberof odd number are:%d\n",odd_count);
     printf("sum of even number are:%d\n",even_sum);
     printf("sum of odd number are:%d\n",odd_sum);

     return 0;

}



