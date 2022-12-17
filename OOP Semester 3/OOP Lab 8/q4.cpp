#include<iostream>
#include<cstdlib>
using namespace std;
class account{
    int no;
    string name;
    public:
    float balance=0, tolerence;
    void get(){
        cout<<"Enter the name of the Account Holder: ";
        cin>>name;
        cout<<"Enter the account number: ";
        cin>>no;
    }
    void display(){
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Account Number: "<<no<<endl;
    }
    virtual void deposit()=0;
    virtual void withdraw()=0;
    virtual void balance_display()=0;
};
class Savings:public account{
    public:
    void deposit(){
        float temp;
        cout<<"Enter the amount to be deposited(in Rs.): "<<endl;
        cin>>temp;
        balance=balance+temp;
    }
    void save_balance(){
        cout<<"Enter the balance in the account: ";
        cin>>balance;
        cout<<balance<<endl;
        repeat:
        if (balance<2500){
            cout<<"The balance is lower than the minimum balance i.e. Rs. 2500. Please deposit money to continue."<<endl;
            deposit();
            goto repeat;
        }
    }
    void withdraw(){
        float temp;
        if (balance>=2500){
            cout<<"Enter the amount to be withdrawn(in Rs): ";
            cin>>temp; 
            if ((balance-temp)<2500){
                cout<<"This withdrawal will cause your balance to be lower than the minimum account, i.e. Rs. 2500. Therefore, Transaction Cancelled."<<endl;
            }
            else{
                balance-=temp;
            }
        }
    }
    void balance_display(){
        if (balance>=2500)
        cout<<"Balance = "<<balance<<endl;
    }
};
class Current: public account{
    float tally;
    public:
    void over_due(){
        cout<<"Enter the tolerence amount: ";
        cin>>tolerence;
        cout<<"Enter the Current balance amount: ";
        cin>>balance;
        cout<<"Tolerence = "<<tolerence<<endl;
    }
    void deposit(){
        float temp;
        cout<<"Enter the amount to be deposited: ";
        cin>>temp;
        balance+=temp;
    }
    void withdraw(){
        float temp;
        cout<<"Enter the amount to be withdrawn: ";
        cin>>temp;
        if (balance<=0){
            printf("The balance is less than 0.\n");
            if (temp<=tolerence)
            balance-=temp;
        }
        else{
            balance-=temp;
        }
    }
    void balance_display(){
        cout<<"Balance = "<<balance<<endl;
    }
};  
int main(){
    system("cls");
    int check;
    account *a1,*a2;
        Savings s1;
        a1=&s1;
        a1->get();
        s1.save_balance();
        a1->balance_display();
        again:
        cout<<"Enter '1' for depositing, '2' for withdrawing and '3' to Quit the program: ";
        cin>>check;
        if (check==1){
            a1->deposit();
            s1.balance_display();
            goto again;
        }
        else if (check==2){
            a1->withdraw();
            s1.balance_display();
            goto again;
        }
    for (int i=0;i<30;i++)
    cout<<"=";
    cout<<endl;
    Current c1;
    a2=&c1;
    a2->get();
    c1.over_due();
    a2->balance_display();
    again1:
    cout<<"Enter '1' for depositing, '2' for withdrawing and '3' to Quit the program: ";
    cin>>check;
    if (check==1){
        a2->deposit();
        c1.balance_display();
        goto again1;
    }
    else if (check==2){
        a2->withdraw();
        c1.balance_display();
        goto again1;
    }
    return 0;
}