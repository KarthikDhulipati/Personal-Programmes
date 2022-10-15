#include<iostream>
#include<stdlib.h>
using namespace std;
class student{
    char name[30];
    int roll_no;
    float marks[5];
    public:
    void get(){
        cout<<"Enter the Name of Student: ";
        cin>>name;
        cout<<"Enter the Roll number: ";
        cin>>roll_no;
        cout<<"Enter the marks in 5 subjects: ";
        for (int i=0;i<5;i++){
            cin>>marks[i];
        }
    }
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No.: "<<roll_no<<endl;
        cout<<"Marks in 5 subjects: "<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
    }
    void sorting(){
        for (int i=0;i<5-1;i++){
            for (int j=0;j<5-i-1;j++){
                if (marks[j]>marks[j+1]){
                    int t=marks[j];
                    marks[j]=marks[j+1];
                    marks[j+1]=t;
                }
            }
        }
        cout<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
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
    cout<<endl;
    for (int i=0;i<n;i++){
        s[i].display();
        s[i].sorting();
    }
    return 0;
}
