/*Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;
class Rectangle{
    public:
    float Length,width,Area,perimeter;
    public:
    int get_data(){
        cout<<"Enter a length and width of Rectangle:";
        cin>>Length>>width;
    }
    int calculation(){
        cout<<"---Area of Rectangle---"<<endl;
        Area = Length * width;
        cout<<"Area of rectangle is:"<<Area<<endl;

        cout<<"---Perimeter of Rectangle---"<<endl;
        perimeter = 2*(Length + width);
        cout<<"Perimeter of Rectangle is:"<<perimeter<<endl;     
    }

};
int main()
{
    Rectangle b;
    b.get_data();
    b.calculation();
    
    return 0;
}