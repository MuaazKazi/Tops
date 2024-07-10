/*Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
using namespace std;
class Student{
    public:
    int id;
    string name;
    public:
    int get_details(){
        cout<<"Enter a name:";
        cin>>name;
        cout<<"Enter Id of student:";
        cin>>id;
    }
    int display_details(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
class Subject{
    public:
     int marks[3];
     int m1;
     int m2;
     int m3; 
    int getExamMarks() {
        cout<<"Enter a subject 1 marks: ";
        cin>>m1;
        cout<<"Enter a subject 2 marks: ";
        cin>>m2;
        cout<<"Enter a subject 3 marks: ";
        cin>>m3;
        }
    int displayExamMarks() {
        cout << "Marks in Subject 1: " << m1 << endl;
        cout << "Marks in Subject 2: " << m2 << endl;
        cout << "Marks in Subject 3: " << m3<< endl;
    }
};
class Result : public Student, public Subject {
public:
    void displayResult() {
        get_details();
        getExamMarks();
        display_details();
        displayExamMarks();
        int total = m1 + m2 + m3;
        float percentage = total / 3;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};
int main()
{
    
    Result res;
    res.displayResult();


    
    
    return 0;
}