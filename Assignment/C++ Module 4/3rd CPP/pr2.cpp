//Write a program of Addition, Subtraction, Division, Multiplication using constructor
#include<iostream>
using namespace std;

class Calculator{
    public:
    int num1,num2;
    public:

    Calculator(int n1,int n2){
        num1 = n1;
        num2 = n2;
       
    }

    int addition(){
        return num1 + num2;
    }

    int subtraction(){
        return num1 - num2;
    }
     int multiplication(){
        return num1 * num2;
    }

     int divison(){
        return num1 / num2;
    }

};

int main()
{
    int num1,num2;
        cout<<"Enter number1 and num2";
        cin>>num1;
        cout<<"Enter number1 and num2";
        cin>>num2;
    

   Calculator c(num1, num2);
    cout << "Addition: " << c.addition() << endl;
    cout << "Subtraction: " << c.subtraction() << endl;
    cout << "Multiplication: " << c.multiplication() << endl;
    cout << "Division: " << c.divison() << endl;
   

    return 0;
}