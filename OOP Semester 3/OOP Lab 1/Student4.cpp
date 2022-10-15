#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class student{
    public:
    int roll_no;
    float marks[5], total=0, per=0;
    string name;
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
};
int main()
{
    system("cls");
    int n;
    float u_limit, l_limit;
    cout<<"Enter the number of entries: ";
    cin>>n;
    student s[n];
    for (int i=0;i<n;i++){
        s[i].get();
    }
    cout<<"Enter the lower and upper limit percentage: ";
    cin>>l_limit>>u_limit;
    for (int i=0;i<n;i++){
        for (int j=0;j<5;j++){
            s[i].total+=s[i].marks[j];
        }
        s[i].per=(s[i].total)/5;
        if (s[i].per>=l_limit && s[i].per<=u_limit){
        cout<<endl<<"Name = "<<s[i].name<<endl;
        cout<<"Roll No. : "<<s[i].roll_no<<endl;
        cout<<"The marks obtained in the Five subjects are as follows: "<<endl;
        for (int j=0;j<5;j++){
            cout<<" "<<s[i].marks[j];
        }
        cout<<endl<<"Total Marks = "<<s[i].total<<endl;
        cout<<"Percentage = "<<(s[i].total/5)<<"%";
        cout<<endl<<endl;
        }
        else continue;
    }
    return 0;
}