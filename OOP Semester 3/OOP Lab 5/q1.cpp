#include<iostream>
#include<string>
#include<cstdlib>
#include<ios>
#include<limits>
using namespace std;
class customer;
class Bank{
    string b_name, branch;
    int ifsc;
    void get(){
        cout<<"Enter the Name of the Bank: ";
        getline(cin, b_name);
        cout<<"Enter the branch name: ";
        getline(cin, branch);
        cout<<"Enter the IFSC Code: ";
        cin>>ifsc;
    }
    void display(){
        cout<<"Name of Bank: "<<b_name<<endl;
        cout<<"Branch: "<<branch<<endl;
        cout<<"IFSC Code: "<<ifsc<<endl;
    }
    friend class customer;
};
class customer{
    string name;
    float balance;
    int id;
    Bank c1;
    public:
    void get(){
        c1.get();
        cout<<"Enter the name of customer: ";
        cin>>name;
        cout<<"Enter the balance: ";
        cin>>balance;
        cout<<"Enter the Customer ID: ";
        cin>>id;
    }
    void display(){
        c1.display();
        cout<<"Name of Customer: "<<name<<endl;
        cout<<"Customer ID: "<<id<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number of customers: ";
    cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    customer c[n];
    for (int i=0;i<n;i++){
        c[i].get();
    }
    for (int i=0;i<40;i++){
        cout<<"=";
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        c[i].display();
    }
    return 0;
}
