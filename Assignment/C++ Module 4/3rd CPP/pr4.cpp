/*Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;
class Bank_account{
    private:
    long Acc_num;
    int bal_amount;
    int deposit_amount;
    int withdraw_amount;

    public:
    int get_details(){
    
        cout<<"Enter account number:";
        cin>>Acc_num;
        cout<<"Enter balance amount in the account:";
        cin>>bal_amount;
        }
        
            int deposit(){
                cout<<"Enter a deposited amount:"<<endl;
                cin>>deposit_amount;
                bal_amount+=deposit_amount;
                cout<<"Total amount after deposit:"<<bal_amount;
            }
            int withdraw(){
                cout<<"Enter a withdraw amount:"<<endl;
                cin>>withdraw_amount;
                bal_amount-=deposit_amount;
                cout<<"Total amount after withdraw:"<<bal_amount;
                
            }
            


};

int main()
{
    Bank_account b;
    b.get_details();
    b.deposit();
    b.withdraw();
    return 0;
}
