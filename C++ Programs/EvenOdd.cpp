#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer number: ";
    cin>>num;
    if (num%2==0){
        cout<<"The number "<<num<<" is an Even number\n"<<endl;
    }
    else{
        cout<<"The number "<<num<<" is an Odd number\n"<<endl;
    }
    return 0;
}