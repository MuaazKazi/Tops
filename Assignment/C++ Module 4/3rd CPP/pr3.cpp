//Write a C++ program to create a class called Car that has private  member variables for company, model, and year. Implement member 
//functions to get and set these variables.
#include<iostream>
using namespace std;
class Car{
    private:
    string company;
    string model;
    int year;
    public:

    

    int get_details(){
        cout<<"Enter a company name:";
        getline(cin,company);

         cout<<"Enter a model name:";
        getline(cin,model);

         cout<<"Enter a year :";
         cin>>year;

        }
     int set_details(string cmp,string mdl,int yr){
        company=cmp;
        model=mdl;
        year=yr;
    }

   int display_details(){
    cout<<"Enter a company name: "<<company<<endl;
    cout<<"Enter a model name: "<<model<<endl;
    cout<<"Enter a year: "<<year<<endl;

   }       
};

int main()
{
    Car c;
    c.get_details();

    c.display_details();
    
    return 0;
}