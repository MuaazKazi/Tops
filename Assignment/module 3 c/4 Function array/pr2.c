//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
    float n1,n2,result;
    int choice;
    do {
        printf("\nMenu\n");
        printf("1. Addition\n");
        printf("2. Subtraction \n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Please Enter your choice:");
        scanf("%d",&choice);
        printf("Enter a number:");
        scanf("%f %f",&n1,&n2);
        switch(choice) {
                case 1:
                result=n1+n2;
                 printf("Addition of numbers: =%f",result);
                   break;

                   case 2:
                result=n1-n2;
                 printf("Subtraction of numbers: =%f",result);
                   break;

                   case 3:
                result=n1/n2;
                 printf("Division of numbers: =%f",result);
                   break;

                   case 4:
                result=n1*n2;
                 printf("Multipication of numbers: =%f",result);
                   break;
        }
} while(choice !='5');
return 0;
}
