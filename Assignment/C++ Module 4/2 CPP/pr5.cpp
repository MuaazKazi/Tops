/*Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.
*/
#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string country;
    public:
     int set_data(string Person_name,int Person_age,string Country_name){
        name = Person_name;
        age = Person_age;
        country = Country_name;
        }
     string get_name(){
            return name;
        }
      int  get_age(){
        return age;
      }
      string get_country(){
        return country;
        }
};


int main()
{
    Person p;
    p.set_data("Muaaz",21,"India");

    cout<<"Name:"<<p.get_name()<<endl;
    cout<<"Age:"<<p.get_age()<<endl;
    cout<<"Country:"<<p.get_country()<<endl;
    
    return 0;
}