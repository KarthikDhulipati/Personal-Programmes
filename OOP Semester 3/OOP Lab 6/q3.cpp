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
class sports{
    public:
    int score=0;
    sports(){
        cout<<"Enter the Marks obtained in Sports Activity: ";
        cin>>score;
    }
};
class result:protected test, protected sports{
    public:
    float total=0; 
    float per;
    void mark_computation(){
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        total+=score;
        printf("Total Marks = %f/600\n", total);
        per=(total*100)/600;
        cout<<"Percentage = "<<per<<"%"<<endl;
    }
};
int main()
{
    result r1;
    r1.mark_computation();
}