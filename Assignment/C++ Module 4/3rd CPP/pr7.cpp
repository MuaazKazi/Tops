/*. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>
using namespace std;
class Date{
    public:
    int day;
    int month;
    int year;
    public:
    int getdetails(){
        cout<<"Enter a day:";
        cin>>day;
        cout<<"Enter a month:";
        cin>>month;
        cout<<"Enter a year:";
        cin>>year;
    }
    int setdata(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }
    bool isValidDate() const {
        if (month < 1 || month > 12)
            return false;
        if (day < 1 || day > 31)
            return false;

        if (month == 2) {
            if (day > 29) 
                return false;
            if (day == 29 && !(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) 
                return false;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day > 30)
                return false;
        }
        return true;
    }
};

int main() {
    Date d;
    d.getdetails();
    if (d.isValidDate())
        cout << "This is a valid date." << endl;
    else
        cout << "This is an invalid date." << endl;

    return 0;
}
