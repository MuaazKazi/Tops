//WAP to print table up to given numbers
#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter a number you want to print for your table\n ");
    scanf("%d",&num);


     printf("print table for multiplication\n",num);
     for(int i=1;i<=10;i++){
        result=num*i;
        printf("%d * %d=%d\n",i,num,result);
     }
     return 0;

}