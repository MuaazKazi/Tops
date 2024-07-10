// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=i;j++)

        sum+=j;
    }
    
    printf("sum of the series . (1)+ (1+2) + (1+2+3) + .... +(1+2+3+4+...+%d)= %d\n",n,sum);  
    return 0;
}
