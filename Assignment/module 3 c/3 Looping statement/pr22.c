//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
    int n,rem,rev=0;
    printf("Enter a numbers:");
    scanf("%d",&n);
    for(; n !=0;n=n/10 )
    {
        rem = n %  10;
        rev=(rev*10) + rem;
        
        
    }
    printf("Reverse number =%d",rev);  
    return 0; 
    }