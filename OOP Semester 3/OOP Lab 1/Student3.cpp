#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class student{
    int roll_no;
    float marks[5], total=0;
    string name;
    public:
    void get(){
        cout<<"Enter the name of the Student: ";
        cin>>name;
        cout<<"Enter the Roll No. of the Student: ";
        cin>>roll_no;
        cout<<"Enter the Marks obtained in the 5 subjects: "<<endl;
        for (int j=0;j<5;j++){
            cin>>marks[j];
        }
    }
    void display(int rc){
        if (rc==roll_no){
        cout<<endl<<"Name = "<<name<<endl;
        cout<<"Roll No. : "<<roll_no<<endl;
        cout<<"The marks obtained in the Five subjects are as follows: "<<endl;
        for (int j=0;j<5;j++){
            cout<<" "<<marks[j];
        }
        }
    }
    void total_marks(int rc){
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        if (rc==roll_no){
        cout<<endl<<"Total Marks = "<<total<<endl;
        cout<<"Percentage = "<<(total/5)<<"%";
        cout<<endl<<endl;
        }
    }
};
int main()
{
    system("cls");
    int n, rc;
    cout<<"Enter the number of entries: ";
    cin>>n;
    student s[n];
    for (int i=0;i<n;i++){
        s[i].get();
    }
    cout<<"Enter the Roll Number to check result: ";
    cin>>rc;
    for (int i=0;i<n;i++){
        s[i].display(rc);
        s[i].total_marks(rc);
    }
    return 0;
}