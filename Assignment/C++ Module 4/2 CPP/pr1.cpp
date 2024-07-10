//WAP to create simple calculator using class
#include<iostream>
using namespace std;

class Calculator{
    public:
    float num1,num2;
    public:
    int get_number(){
        cout<<"Enter Number1: ";
        cin>>num1;
        cout<<"Enter Number2: ";
        cin>>num2;
    }
    int addition(){
        int result=num1 + num2;
        cout<<"Result: "<<result<<endl;
    }
    int subtraction(){
        int result=num1 - num2;
        cout<<"Result: "<<result<<endl;
    }
    int multiplication(){
        int result=num1 * num2;
        cout<<"Result: "<<result<<endl;
    }
    int division(){
        int result=num1 / num2;
        cout<<"Result: "<<result;
    }
};
int main(){
    Calculator c;

    c.get_number();
    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();

    
    return 0;
}