#include<iostream>
#include<stdlib.h>
using namespace std;
class student{
    int roll_no;
    char name[20];
    float marks[5], total=0, per;
    public:
    void get(){
        cout<<"Enter the Roll Number: ";
        cin>>roll_no;
        cout<<"Enter the Name of student: ";
        cin>>name;
        cout<<"Enter the total marks obtained in 5 subjects (/100): ";
        for (int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void total_marks(){
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        cout<<"Total Marks = "<<total<<"/500"<<endl;
        per=(total*100)/500;
        cout<<"Percentage = "<<per<<"%"<<endl;
    }
    void display(){
        for(int i=0;i<30;i++)
        cout<<"=";
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No. : "<<roll_no<<endl;
        total_marks();
    }
};
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number of entries: ";
    cin>>n;
    student s[n];
    for (int i=0;i<n;i++){
        s[i].get();
    }
    for (int i=0;i<n;i++){
        s[i].display();
    }
    cout<<endl<<"KIIT Roll No.: 2105800"<<endl;
    return 0;
}