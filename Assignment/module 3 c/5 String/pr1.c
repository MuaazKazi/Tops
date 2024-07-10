//Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
int stringlength(char str[]) {
    int length=0;
    while(str[length] != 0){
        length++;
    }
    return length;

}
int main(){
    char str[100];
    
    printf("Enter a string:");
    gets(str);
    int length= stringlength(str);
    printf("length of string:%d",length);
    return 0;


}
