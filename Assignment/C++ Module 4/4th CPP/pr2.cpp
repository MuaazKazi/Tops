//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    public:
    int get_data(){
        cout<<"Enter a length of rectangle: ";
        cin>>length;
        cout<<"Enter a width of rectangle:  ";
        cin>>width;
    }
};
class Area: public Rectangle{
    public:
    int Area;
    public:
    int display_data(){
        get_data();
        cout<<"Length:"<<length<<endl;
        cout<<"width:"<<width<<endl;
        Area =length * width;
        cout<<"Area:"<<Area<<endl;
        }
};

int main()
{
    Area area;
    area.display_data();
    
    return 0;
}