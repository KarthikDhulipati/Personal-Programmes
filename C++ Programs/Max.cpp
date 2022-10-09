#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the 3 numbers to find the largest number between them: ";
    cin>>n1>>n2>>n3;
    if (n1>n2){
        if (n1>n3){
        cout<<"The largest number is = ";
        cout<<n1<<endl;
        }
        else if (n3>n1){
        cout<<"The Largest number is = ";
        cout<<n3<<endl;
        }
    }
    else{
        if (n2>n3){
            cout<<"The largest number is = ";
            cout<<n2<<endl;
        }
        else{
            cout<<"The largest number is = ";
            cout<<n3<<endl;
        }
    }
    return 0;
}