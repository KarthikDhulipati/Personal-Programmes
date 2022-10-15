#include<iostream>
#include<string>
using namespace std;
class employee{
    protected:
    int id;
    string name; 
    float salary;
};
class Regular:protected employee{
    public:
    float da, hra;
    Regular(){
        cout<<"Enter the name of the Employee: ";
        cin>>name;
        cout<<"Enter the Employee ID: ";
        cin>>id;
        cout<<"Enter DA and HRA percentages: ";
        cin>>da>>hra;
        cout<<"Enter the basic salary of the employee: ";
        cin>>salary;
        salary+=((da/100)*salary)+((hra/100)*salary);
        cout<<"Salary = "<<salary<<endl;
    }
};
class parttime:protected employee{
    public:
    int hrs, pay;
    parttime(){
        cout<<"Enter the name of the Employee: ";
        cin>>name;
        cout<<"Enter the Employee ID: ";
        cin>>id;
        cout<<"Enter the pay per hour: ";
        cin>>pay;
        cout<<"Enter the number of hours worked: ";
        cin>>hrs;
        salary=pay*hrs;
        cout<<"The salary for the part time worker is: "<<salary<<endl;
    }
};
int main(){
    Regular r1;
    parttime p1;
    return 0;
}