#include<iostream>
#include<cstdlib>
using namespace std;
class Employee{
    public:
    int age, hrs;
    bool flag;
    string name;
    float salary, da, hra, bs;
    void get(){
        cout<<"Enter name of employee: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the Total Salary of the employee: ";
        cin>>salary;
        
    }
    void display(){
        cout<<"Name: "<<name;
        cout<<"Age: "<<age;
        cout<<"Total Salary: "<<salary;
    }
    virtual void calculation(){
        
            cout<<"Enter the DA(in %) of the Employee: ";
            cin>>da;
            cout<<"Enter the HRA(in %) of the Employee: ";
            cin>>hra;
            bs=salary-((da/100)*salary)-((hra/100)*salary);
        
    }
};
class Regular:public Employee{
    public:
    void show(){
        cout<<endl<<"Basic Salary of the employee: "<<bs<<endl;
        cout<<"DA = "<<da<<" %"<<endl;
        cout<<"HRA = "<<hra<<" %"<<endl<<endl;
    }
};
class Parttime: public Employee{
    public:
    void calculation(){
        cout<<"Enter the number of hours worked for: ";
        cin>>hrs;
        cout<<endl<<"Salary for the part-time employee: "<<salary<<endl;
        cout<<"Pay per hour for the Employee: Rs. "<<(salary/hrs)<<endl<<endl;
    }
};
int main(){
    system("cls");
    Employee *e1, *e2;
    Regular r1;
    Parttime p1;
    e1=&r1;
    r1.get();
    e1->calculation();
    r1.show();
    e2=&p1;
    p1.get();
    e2->calculation();
    return 0;
}