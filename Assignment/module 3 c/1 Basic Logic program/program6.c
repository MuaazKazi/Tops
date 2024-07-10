//area of triangle
#include<stdio.h>
int main(){
    float base,height,area;
    

    printf("Enter the length of base and height of triangle");
    scanf("%f %f",&base,&height );

    area = 0.5*base*height;
    
    printf("\n Area of triangle:%f",area);
   
    return 0;

}