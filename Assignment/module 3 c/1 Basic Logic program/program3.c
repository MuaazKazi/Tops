//find area and circumference
#include<stdio.h>
int main(){
    float radius,area,circumference;
    float pi=3.14;

    printf("Enter the radius of the circle");
    scanf("%f",&radius);
    area = pi*radius*radius;
    circumference=2*pi*radius;
    printf("\n area is:%f",area);
    printf("\n circumference is:%f",circumference);
    return 0;

}