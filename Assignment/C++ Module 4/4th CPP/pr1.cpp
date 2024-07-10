/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int age;
    public:
    int get_data(){
        cout<<"Enter a name:";
        cin>>name;
        cout<<"Enter age of player:";
        cin>>age;
    }
};
class Batsman: public Cricketer{
    public:
    int total_runs;
    float avg_runs;
    int best_performance;
    public:
        int input_data(){
            get_data();
            cout<<"Enter a total runs score by batsman:";
            cin>>total_runs;
            cout<<"Enter best performance:";
            cin>>best_performance;
        }
        void   calculate_average_runs(){
            avg_runs = total_runs / 10;
        }
         void display_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total runs: " << total_runs << endl;
        cout << "Average runs: " << avg_runs << endl;
        cout << "Best performance: " << best_performance << endl;
    }

};

int main()
{
    Batsman batsman;
    batsman.input_data();
    batsman.calculate_average_runs();
    batsman.display_data();
    
    return 0;
}