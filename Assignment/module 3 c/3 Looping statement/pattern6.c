//A
//AB
//ABC
//ABCD
//ABCDE
#include<stdio.h>
int main()
{
    int row,col;
    char c = 'A';

    for(row=0;row<=4;row++){
        for(col=0;col<=row;col++){
           
            printf("%c",c+col); 
        }
       
        printf("\n");
    }
    return 0;

}