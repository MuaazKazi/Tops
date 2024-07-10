//Convert country’s name in abbreviate form
#include<stdio.h>
int main(){
    char countryname[20];
    printf("Enter the Country name:");
    scanf("%s",countryname);
    printf("Abbreviated name:");
    printf("%c\n",countryname[0]);
    return 0;


}