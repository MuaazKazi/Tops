//circumference of triangle
#include<stdio.h>
int main(){
    int a,b,c,triangle;
    

    printf("Enter the circumference of triangle");
    scanf("%d %d %d",&a,&b,&c);
    triangle = a + b + c;
    
    printf("circumference of triangle is:%d",triangle);

    return 0;

}