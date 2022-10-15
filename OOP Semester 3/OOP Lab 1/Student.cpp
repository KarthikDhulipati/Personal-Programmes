#include<iostream>
#include<stdlib.h>
using namespace std;
class student{
    char name[20];
    int rollno;
    int marks[5];
    public:
    void get(){
        cout<<"Enter the name of the Student: ";
        cin>>name;
        cout<<"Enter the Roll No. of the Student: ";
        cin>>rollno;
        cout<<"Enter the Marks obtained in the 5 subjects: "<<endl;
        for (int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<endl<<"Name = "<<name<<endl;
        cout<<"Roll No. : "<<rollno<<endl;
        cout<<"The marks obtained in the Five subjects are as follows: "<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
    cout<<endl<<endl;
    }
};
int main()
{
    system("cls");
    student s;
    s.get();
    s.display();
    return 0;
}