/*Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.
*/
#include<iostream>
using namespace std;
class Circle{
    public:
    float radius,pi=3.14,Area,Circumfernce;
    public:
    int get_data(){
        cout<<"Enter a radius of circle:";
        cin>>radius;
    }
    int calculation(){
        cout<<"---Area of Circle---"<<endl;
        Area = pi * radius*radius;
        cout<<"Area of circle is:"<<Area<<endl;

        cout<<"---Circumference of Circle---"<<endl;
        Circumfernce = 2* pi * radius;
        cout<<"Circumference of circle is:"<<Circumfernce<<endl;     
    }

};
int main()
{
    Circle b;
    b.get_data();
    b.calculation();
    
    return 0;
}