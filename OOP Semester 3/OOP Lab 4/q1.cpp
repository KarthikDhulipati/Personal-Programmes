#include<iostream>
#include<cstdlib>
using namespace std;
class Account{
    int long AccountNo;
    string Account_holder_name, Account_type;
    float balance, deposit, withdraw;
    public:
    void getAccountinformation(){
        cout<<"Enter the New Account Number: ";
        cin>>AccountNo;
        cout<<"Enter the Name of the Account Holder: ";
        cin>>Account_holder_name;
        cout<<"Enter the type of Account(Current/Saving Account): ";
        cin>>Account_type;
        cout<<"Enter the balance in the account: ";
        cin>>balance;
    }
    void display(){
        cout<<"Account Holder Name : "<<Account_holder_name<<endl; 
        cout<<"Account Number : "<<AccountNo<<endl;
        cout<<"Account Type : "<<Account_type<<endl;
        cout<<"Balance = "<<balance<<endl;
    }
    void dep(){
        cout<<"Enter the amount to be Deposited: ";
        cin>>deposit;
        balance+=deposit;
        cout<<"Current Balance = "<<balance<<endl;
    }
    void withd(){
        cout<<"Enter the amount to be Deposited: ";
        cin>>withdraw;
        balance-=withdraw;
        cout<<"Current Balance = "<<balance<<endl;
    }
};
int main()
{
    system("cls");
    int n, b;
    cout<<"Enter the number of accounts: ";
    cin>>n;
    Account a[n];
    for (int i=0;i<n;i++){
        a[i].getAccountinformation();
        cout<<"Enter '1' to deposit and '2' to withdraw, else press '0' to skip: ";
        cin>>b;
        if (b==1){
            a[i].dep();
        }
        else if(b==2){
            a[i].withd();
        }
        else{
            continue;
        }
    }
}