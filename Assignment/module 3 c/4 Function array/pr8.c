//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
int main(){
    char str[100];
    char palindreome=1;
    int i,j,length;
    printf("Enter a string:");
    gets(str);
    length= strlen(str);
    for(i=0,j=length-1; i < j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]= temp;
    }
    printf("Reverse string is %s \n",str);
    
    for(i=0; i<length/2;i++){
        if(str[i]!=str[length -1]){
            palindreome =0;
            break;
        }
    }
    if(palindreome =1){
        printf("%s is palindrome.\n",str);
    }
    else{
        printf("%s is not palindrome.\n",str);

    }

}