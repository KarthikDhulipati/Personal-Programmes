#include<iostream>
#include<cstdlib>
using namespace std;
class student{
    string name;
    int age, roll;
    public:
    student(){
        cout<<"Enter name of student: ";
        cin>>name;
        cout<<"Enter Roll Number of the student: ";
        cin>>roll;
        cout<<"Enter the age: ";
        cin>>age;
    }
    void display(){
        cout<<"Name = "<<name<<endl;
        cout<<"Roll No. = "<<roll<<endl;
        cout<<"Age = "<<age<<endl;
    }
};
class test:public student
{
    public:
    int marks[5];
    test(){
        cout<<"Enter the marks obteined in 5 subjects respectively: "<<endl;
        for (int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void show(){
        cout<<"Marks obtained in the 5 subjects are as follows: "<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
};
class result:protected test{
    public:
    int total=0; 
    float per;
    void mark_computation(){
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        printf("Total Marks = %d/500\n", total);
        per=total/5;
        printf("Percentage = %d%\n",total/5);
    }
};
int main()
{
    system("cls");
    result r1;
    r1.mark_computation();
}