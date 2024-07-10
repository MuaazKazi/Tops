//circumference of reactangle
#include<stdio.h>
int main(){
    float width,length,area;
    

    printf("Enter the circumference of rectangle");
    scanf("%f %f",&width,&length);
    area = 2*width*2*length;
    
    printf("\n circumference of rectangle is:%f",area);

    return 0;

}