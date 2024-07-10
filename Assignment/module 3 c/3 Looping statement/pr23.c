// 1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    
    printf("sum of the series 1 + 2 + 3 +...+%d= %d\n",n,sum);  
    return 0;
}
