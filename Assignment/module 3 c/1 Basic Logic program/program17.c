//Calculate person’s insurance premium based on salary
int main() {
float salary,premiumRate,insurancePremium;
printf("Enter Person's salary:");
scanf("%f",&salary);
printf("Enter premium rate in percentage:");
scanf("%f",&premiumRate);
insurancePremium=salary*0.10;
printf("Insurance Premium:%.2f",insurancePremium);

}
