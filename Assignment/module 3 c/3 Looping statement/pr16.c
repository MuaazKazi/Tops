//.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
    int num,sum=0,i=0;

    printf("Enter the natural numbers:");
    scanf("%d",&num);
    
        
    
       while(i<=num)
    {
      
        
        sum+=i;
        i++;
    }
      printf("the sum of number is %d\n",sum);
      return 0;
    }
        


