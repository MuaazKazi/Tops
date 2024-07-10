/*Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void get_data() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    int marks;
    int percentage;
    void get_details() {
        get_data();
        cout << "Enter total marks obtained by student: ";
        cin >> marks;
        percentage = marks/5;
    }

    void display_details() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};

class Teacher : public Person {
public:
    int salary;

    void input_data() {
        get_data();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void show_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    cout << "Enter student details:\n";
    student.get_details();
    cout << "\nStudent details:\n";
    student.display_details();

    Teacher teacher;
    cout << "\nEnter teacher details:\n";
    teacher.input_data();
    cout << "\nTeacher details:\n";
    teacher.show_data();

    return 0;
}
