#include<iostream>
#include<string>
#include<stdlib.h>
#include<ios> 
#include<limits>
using namespace std;
class student{
    int roll_no;
    string name;
    float marks;
    public:
    void get(){
        cout<<"Enter the Roll Number: ";
        cin>>roll_no;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter the Name of student: ";
        getline(cin, name);
        cout<<"Enter the total marks obtained: ";
        cin>>marks;
    }
    void display(){
        for (int i=0;i<50;i++){
            cout<<"=";
        }
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No. : "<<roll_no<<endl;
        cout<<"Total Marks: "<<marks<<endl;
    }
};
int main()
{
    system("cls");
    student s1;
    s1.get();
    s1.display();
    return 0;
}