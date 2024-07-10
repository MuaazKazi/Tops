//vowel or consonant using switch case.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charchter:");
    scanf("%c",&ch);

switch(ch)
{
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("The letter %c is vowel.\n",ch);
    break;
    default:
    printf("the letter %c is consonant\n",ch);
}
return 0;

}