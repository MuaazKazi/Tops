//WAP to perform Palindrome number using for loop and function
#include<stdio.h>
int palindrome(int num){
    int rev=0,rem,original_number;
    original_number=num;
    for(; num !=0;num/=10){
    rem=num%10;
    rev=rev*10+rem;
    }
    if(original_number==rev)
        return 1;
    else
    return 0;
}


int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(palindrome(num))
    printf("%d is a palindrome number.\n",num);
    else
    printf("%d is not a palindrome number.\n",num);
    return 0;
}
