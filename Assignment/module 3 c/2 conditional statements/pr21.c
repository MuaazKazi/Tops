//Write a C program to input basic salary of an employee and calculate 
//its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include <stdio.h>
int main() {
    float basicSalary, grossSalary,hra, da;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

        if (basicSalary <= 10000)
        {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    }
     else if (basicSalary <= 20000) 
     {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    }
     else
     {
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }
    grossSalary = basicSalary + hra + da;
    printf("Gross Salary: %.2f\n", grossSalary);

    return 0;
}
