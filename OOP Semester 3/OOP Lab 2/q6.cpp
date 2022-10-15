#include<iostream>
#include<string>
#include<stdlib.h>
#include<ios> 
#include<limits>
using namespace std;
class employee{
    int id, age;
    float salary, gross_salary;
    string name;
    public:
    void get(){
        cout<<"Enter the Emoloyee ID: ";
        cin>>id;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter Employee Name: ";
        getline(cin, name);
        cout<<"Enter Employee Age: ";
        cin>>age;
        cout<<"Enter Employee Salary: ";
        cin>>salary;
        gross_salary=salary+(0.8*salary)+(0.1*salary);
    }
    void display(){
        cout<<"\t"<<id<<"\t"<<name<<"\t\t\t"<<age<<"\t\t"<<salary<<"\t\t"<<gross_salary<<endl;
    }
};
int main()
{
    system("cls");
    int n, roll_no=2105800;
    cout<<"Roll No. : "<<roll_no<<endl;;
    cout<<"Enter the number of entries: ";
    cin>>n;
    employee e[n];
    for (int i=0;i<n;i++){
        e[i].get();
    }
    for (int i=0;i<40;i++){
        cout<<"=";
    }
    cout<<endl;
    cout<<"\tID\tName\t\t\tAge\t\tSalary\t\tGross Salary\n";
    for (int i=0;i<n;i++){
        e[i].display();
    }
    return 0;
}