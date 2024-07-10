//C Program to Check Uppercase or Lowercase or Digit or Special charachter
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charchter:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <='Z')
    {
        printf("Charchter is in uppercase");
    }
   else if(ch >= 'a' && ch <= 'z')
    {
        printf("Charchter is in lowercase");
    }
    else{
        printf("It is special charchter");
    }
}

