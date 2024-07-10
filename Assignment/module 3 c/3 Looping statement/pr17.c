//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main(){
    int num,even_no=0,odd_no=0,i;
    printf("Enter a 5 number:");
    
    while(i<5){
        scanf("%d",&num);
        if(num%2==0){
            even_no++;
        }
        else{
            odd_no++;
        }
        i++;
        }
        printf("Number of even number is:%d\n",even_no);
        printf("Number of odd number is:%d\n",odd_no);


    }
    
