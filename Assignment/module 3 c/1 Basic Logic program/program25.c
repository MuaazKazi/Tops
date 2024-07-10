//accept 5 expense from user and find average of expense.
#include <stdio.h>

int main () {
    float expenses1,expenses2,expenses3,expenses4,expenses5,total_expenses,avarage_expenses;

    printf("Enter User Expenses:");
    scanf("%f %f %f %f %f", &expenses1,&expenses2,&expenses3,&expenses4,&expenses5);
    
    total_expenses = expenses1 + expenses2 + expenses3 + expenses4 + expenses5;
    printf("Total expenses of Employee:%f \n",total_expenses);

    avarage_expenses = total_expenses / 5;
    printf("Avarage expenses of Employee:%f",avarage_expenses);
    return 0;
}