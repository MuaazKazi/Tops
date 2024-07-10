// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i*i;
    }
    
    printf("sum of the series . (1*1) + (2*2) + (3*3) + (4*4) + ....+ (%d * %d)= %d\n",n, n,sum);  
    return 0;
}
