//WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i;
    printf("Enter the string:");
    gets(str);
    for(i=0;str[i]!='\0';i++);
    printf(" %d",i);
    return 0;
} 