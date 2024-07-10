//Convert school’s name in abbreviated form
#include<stdio.h>
int main(){
    char schoolname[20];
    printf("Enter the school name:");
    scanf("%s",schoolname);
    printf("Abbreviated name:");
    printf("%c\n",schoolname[0]);
    return 0;


}