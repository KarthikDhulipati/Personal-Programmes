#include<iostream>
#include<stdlib.h>
using namespace std;
struct employee{
    public:
    char name[30];
    int id, age;
    float salary, gs;
};
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number of entries: ";
    cin>>n;
    struct employee *e, a[n];
    e=a;
    for (int i=0;i<n;i++){
        cout<<"Enter the Employee ID: ";
        cin>>(e+i)->id;
        cout<<"Enter Employee Name: ";
        cin>>(e+i)->name;
        cout<<"Enter the age of the Employee: ";
        cin>>(e+i)->age;
        cout<<"Enter the salary of the Employee: ";
        cin>>(e+i)->salary;
        cout<<endl;
    }
    for (int i=0;i<n;i++){
        (e+i)->gs=(e+i)->salary+((e+i)->salary*(0.8))+((e+i)->salary*(0.1));
    }
    printf("\nEmployee ID\tName\t\tAge\tSalary\tGross-Salary\n\n");
    for (int i=0;i<n;i++){
        cout<<(e+i)->id<<"\t\t"<<(e+i)->name<<"\t\t"<<(e+i)->age<<"\t"<<(e+i)->salary<<"\t"<< (e+i)->gs<<"\n";
    }
    return 0;
}