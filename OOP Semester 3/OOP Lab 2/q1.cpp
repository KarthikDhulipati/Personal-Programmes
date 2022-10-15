#include<iostream>
#include<string>
#include<stdlib.h>
#include<ios> 
#include<limits>
using namespace std;
class name{
    int roll_no;
    string hobbies, address, n;
    public:
    void get(){
        cout<<"Enter your name: ";
        getline(cin,n);
        cout<<"Enter your Roll Number: ";
        cin>>roll_no;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter your Hobbies: ";
        getline(cin,hobbies);
        cout<<"Enter your Address: ";
        getline(cin,address);
    }
    void display(){
        for (int i=0;i<50;i++){
            cout<<"=";
        }
        cout<<endl;
        cout<<"Name: "<<n<<endl;
        cout<<"Roll Number = "<<roll_no<<endl;
        cout<<"Hobbies: "<<hobbies<<endl;
        cout<<"Address: "<<address<<endl;
    }
};
int main()
{
    system("cls");
    name s1;
    s1.get();
    s1.display();
    return 0;
}