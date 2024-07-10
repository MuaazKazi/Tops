/*Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;
class Bank_account{
    public:
    string depositor_name;
    long Acc_num;
    string acc_type;
    int bal_amount;
    int deposit_amount;
    int withdraw_amount;

    public:
    int get_details(){
        cout<<"Enter depositor name:";
        cin>>depositor_name;
        cout<<"Enter account number:";
        cin>>Acc_num;
        cout<<"Enter account type:";
        cin>>acc_type;
        cout<<"Enter balance amount in the account:";
        cin>>bal_amount;
        }
        int assign_value(string name,long Account_number ,string account_type,int balance_amount){
            depositor_name = name;
            Acc_num = Account_number;
            acc_type = account_type;
            bal_amount = balance_amount;
            }
            int deposit(){
                cout<<"Enter a deposited amount:";
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
            int display(){
                cout<<"Enter Account holder name:"<<depositor_name<<endl;
                cout<<"Total account balance:"<<bal_amount<<endl;
            }


};

int main()
{
    Bank_account b;
    b.get_details();
    b.deposit();
    b.withdraw();
    b.display();

    
    return 0;
}