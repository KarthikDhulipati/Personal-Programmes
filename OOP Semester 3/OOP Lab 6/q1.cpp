#include<iostream>
#include<cstdlib>
using namespace std;
class student{
    protected:
    string name;
    int age, roll;
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
    int marks[5];
    public:
    test(){
        cout<<"Enter the marks obteined in 5 subjects respectively: "<<endl;
        for (int i=0;i<5;i++){
            cin>>marks[i];
        }
        for (int i=0;i<30;i++){
            printf("=");
        }
        printf("\n");
    }
    void show(){
        student::display();
        cout<<"Marks obtained in the 5 subjects are as follows: "<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    system("cls");
    test t1;
    t1.show();
}