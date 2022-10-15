#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class employee{
    int emp_id;
    string name;
    public:
    float bsalary, gross_salary;
    void input(){
        cout<<"Enter the name of the Empolyee: ";
        cin>>name;
        cout<<"Enter the Employee ID: ";
        cin>>emp_id;
        cout<<"Enter the Basic Salary of the Employee: ";
        cin>>bsalary;
    }
    void output(){
        cout<<"Name of Employee: "<<name<<endl;
        cout<<"Employee ID : "<<emp_id<<endl;
        cout<<"Basic Salary: "<<bsalary<<endl;
    }
    void find_gross_salary(){
        float hra=(0.05*bsalary), da=(0.10*bsalary), ta=(0.02*bsalary);
        gross_salary=bsalary+hra+da+ta;
        cout<<"Gross Salary : "<<gross_salary<<endl;
    }
    float max_salary(employee *e, int n){
        int max=e[0].bsalary;
        for (int i=0;i<n;i++){
            if (max<e[i].bsalary){
                max=e[i].bsalary;
            }
            else{
                continue;
            }
        }
        return max;
    }
};
int main()
{
    system("cls");
    int n;
    float m;
    cout<<"Enter the number of entries of the Employees: ";
    cin>>n;
    employee e[n];
    for (int i=0;i<n;i++){
        e[i].input();
    }
    for (int i=0;i<30;i++){
        cout<<"=";
    }
    cout<<endl;
    for (int i=0;i<n;i++){
        e[i].output();
        e[i].find_gross_salary();
        if (i!=0){
            m=e[i].max_salary(e, n);
        }
    }
    cout<<"Highest Basic Salary = "<<m<<endl;
    for (int i=0;i<30;i++){
        cout<<"=";
    }
    return 0;
}