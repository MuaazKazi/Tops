//Calculate sum of 10 numbers using of while loop.
#include<stdio.h>
int main(){
    int num,sum=0,count=1;

    printf("Enter 10 number:");
    for(int i = 0;i<10;i++){
        
    
       while(count <=10)
    {
        scanf("%d",&num);
        
        sum+=num;
        count++;
    }
    }
        printf("the sum of 10 number is %d\n",sum);


}