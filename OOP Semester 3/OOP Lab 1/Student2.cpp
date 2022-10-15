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
    void display(){
        cout<<endl<<"Name = "<<name<<endl;
        cout<<"Roll No. : "<<roll_no<<endl;
        cout<<"The marks obtained in the Five subjects are as follows: "<<endl;
        for (int j=0;j<5;j++){
            cout<<marks[j]<<" ";
        }
        cout<<endl;
    }
    void total_marks(){
        total=0;
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        cout<<endl<<"Total Marks = "<<total<<endl;
        cout<<"Percentage = "<<(total/5)<<"%";
        cout<<endl<<endl;
    }
    void sorting(){
        cout<<"Name : "<<name<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        for (int i=0;i<5-1;i++){
            for (int j=0;j<5-i-1;j++){
                if (marks[j]>marks[j+1]){
                    int t=marks[j];
                    marks[j]=marks[j+1];
                    marks[j+1]=t;
                }
            }
        }
        cout<<endl<<"After Sorting the Marks: "<<endl;
        for (int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
    }
    void total_marks(int rc){
        total=0;
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        if (rc==roll_no){
            display();
            cout<<endl<<"Total Marks = "<<total<<endl;
            cout<<"Percentage = "<<(total/5)<<"%";
            cout<<endl<<endl;
        }
    }
    void range(int ulimit, int llimit){
        total=0;
        for (int i=0;i<5;i++){
            total+=marks[i];
        }
        if ((total/5)>=llimit && (total/5)<=ulimit){
            display();
        }
    }
};
int main()
{
    system("cls");
    int n, rc;
    char q;
    cout<<"Enter the number of entries: ";
    cin>>n;
    student s[n];
    for (int i=0;i<n;i++){
        s[i].get();
    }
    repeat:
    cout<<"Enter the question part to get the output: ";
    cin>>q;
    if (q=='a'){
        for (int i=0;i<n;i++){
            s[i].display();
            s[i].total_marks();
        }
    }
    else if (q=='b'){
        cout<<"Enter the Roll Number to check result: ";
        cin>>rc;
        for (int i=0;i<n;i++){
            s[i].total_marks(rc);
        }
    }
    else if (q=='c'){
        int ulimit, llimit;
        cout<<"Enter the upper and lower limit respectively: ";
        cin>>ulimit>>llimit;
        for (int i=0;i<n;i++){
            s[i].range(ulimit, llimit);
        }
    }
    else if (q=='d'){
        for (int i=0;i<n;i++){
            s[i].sorting();
        }
    }
    else{
        cout<<"Please enter valid values"<<endl;
    }
    int check;
    cout<<"Do you want to repeat the program ('1' for YES and '0' for NO): ";
    cin>>check;
    if (check==1){
        goto repeat;
    }
    else{
        cout<<"The program terminates now."<<endl;
    }
    return 0;
}