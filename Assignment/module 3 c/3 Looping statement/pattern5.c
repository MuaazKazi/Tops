//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
#include<stdio.h>
int main()
{
    int row,col,num=1;
    

    for(row=0;row<=4;row++){
        for(col=0;col<=row;col++){
           
            printf("%d ",num++);
             
        
        }
       
        printf("\n");
    }
    return 0;

}