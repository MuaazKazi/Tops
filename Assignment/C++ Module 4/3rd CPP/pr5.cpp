/*Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.*/
#include<iostream>
using namespace std;
class Triangle{
private:
int side1,side2,side3;

public:
    // Triangle(int s1,int s2,int s3){
    //     side1=s1;
    //     side2=s2;
    //     side3=s3;
    // }
    int get_details(){
        cout<<"Enter side 1:"<<endl;
        cin>>side1;
        cout<<"Enter side 2:"<<endl;
        cin>>side2;
        cout<<"Enter side 3:"<<endl;
        cin>>side3;
    }
    bool isequilateral(){
        if(side1 == side2 && side2 == side3){
            cout<<"Triangle sides are equilateral."<<endl;
        }
        else{
            cout<<"Triangle sides are not equilateral."<<endl;
        }
    }
    bool isisoceles(){
        if(side1 == side2 || side2 == side3 || side3 == side1){
            cout<<"Triangle sides are isocelss."<<endl;
        }
        else{
            cout<<"Triangle sides are not isoceles.";
        

    }
    }
    bool isscalene(){
         if(side1 != side2 || side2 != side3 || side3 != side1){
            cout<<"Triangle sides are scalene."<<endl;
        }
        else{
            cout<<"Triangle sides are not scalene.";

    }
    }
};


int main()
{
    Triangle t;
    t.get_details();
    t.isequilateral();
    t.isisoceles();
    t.isscalene();
    
    return 0;
}