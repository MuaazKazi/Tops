// Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
int main(){
    int n1,n2,n3,num1,num2,num3,rem,rev=0,rev1=0,rev2=0,rev3=0;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);
    n1=num1;
    while(n1!=0)
    {
        rem = n1 %  10;
        rev1=(rev1*10) + rem;
        n1= n1/10;
    
    }
    if(rev1 == num1)
    {
        printf("\n %d is palindrome",num1);   
    }
    else
    {
        printf("\n %d is not palindrome",num1);   
    }
    n2=num2;
    while(n2!=0)
    {
        rem = n2 %  10;
        rev2=(rev2*10) + rem;
        n2= n2/10;
    
    }
    if(rev2 == num2)
    {
        printf("\n %d is palindrome",num2);   
    }
    else
    {
        printf("\n %d is not palindrome",num2);   
    }
    n3=num3;
    while(n3!=0)
    {
        rem = n3 %  10;
        rev3=(rev3*10) + rem;
        n3= n3/10;
    
    }
    if(rev3 == num3)
    {
        printf("\n %d is palindrome",num3);   
    }
    else
    {
        printf("\n %d is not palindrome",num3);   
    }
    return 0;
}
