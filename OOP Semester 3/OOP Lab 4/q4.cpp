#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>
using namespace std;
class Marks{
    double marks[5];
    string subject[5]={"Physics", "Chem", "Math", "English", "CSE"};
    public:
    void get(){
        cout<<"Enter the marks obtained in Physics, Chemistry, Math, English and CSE respectively: \n";
        for (int i=0;i<5;i++){
            cin>>marks[i];
        }
        cout<<setfill('=')<<setw(30)<<" "<<endl;
    }
    void display(){
        cout<<endl<<"The Marks Obtained are as follows: "<<endl;
        cout<<"SUBJECT\t\t"<<"Marks"<<endl;
        for (int i=0;i<5;i++){
            cout<<subject[i]<<"\t\t "<<setprecision(3)<<marks[i]<<endl;
        }
    }
};
int main()
{
    system("cls");
    Marks m;
    m.get();
    m.display();
    return 0;
}