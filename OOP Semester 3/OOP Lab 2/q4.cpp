#include<iostream>
#include<stdlib.h>
using namespace std;
class complex{
    float a, b;
    public:
    void get(){
        cin>>a>>b;
    }
    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    system("cls");
    int n, roll_no=2105800;
    cout<<"Roll No. : "<<roll_no<<endl;
    cout<<"Enter the number of entries: ";
    cin>>n;
    complex num[n];
    cout<<"Enter the Real and Imaginary Coefficients of the Complex number: ";
    for (int i=0;i<n;i++){
        num[i].get();
    }
    cout<<"The Complex numbers are as follows: ";
    for (int i=0;i<n;i++){
        num[i].display();
    }
    return 0;
}