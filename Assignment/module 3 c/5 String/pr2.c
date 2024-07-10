//Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main(){
    char str[50];
    int i;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i]!= '\0';i++){
        printf("%c \t",str[i]);
    }
    printf("\n");
}


