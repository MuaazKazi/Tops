//Area of rectangle of prism
#include<stdio.h>
int main(){
    int width,length,height,Area;
    

    printf("Enter Area of rectangle of prism");
    scanf("%d %d %d",&width,&length,&height);
    Area= 2*width*2*length+2*height*2*length+2*height*2*width;
    
    printf("Area of rectangle of prism is:%d",Area);

    return 0;
}