//accept 5 employee name and salary
#include <stdio.h>
int main () {
    char EMP1,EMP2,EMP3,EMP4,EMP5;
    int salary1,salary2,salary3,salary4,salary5,total_salary,avarage_salary;

    printf("Enter Employee Name:");
    scanf("%c %c %c %c %c",&EMP1,&EMP2,&EMP3,&EMP4,&EMP5);

    printf("Enter Employee salary:");
    scanf("%d %d %d %d %d", &salary1,&salary2,&salary3,&salary4,&salary5);

    // Total Salary
    total_salary = salary1+salary2+salary3+salary4+salary5;
    printf("Total salary of Employee:%d \n",total_salary);

    //Avarage of salary
    avarage_salary = total_salary / 5;
    printf("Avarage salary of Employee:%d",avarage_salary);
    return 0;
}