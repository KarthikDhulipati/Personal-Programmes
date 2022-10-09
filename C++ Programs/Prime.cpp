#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    system("cls");
    int num, q=0, i, flag=0;
    cout<<"Enter any number to find if it is a Prime number or not: ";
    cin>>num;
    q=num/2;
    for (i=2;i<=q;i++){
        if (num%i==0){
            cout<<"The number is a Composite Number."<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"The number is a Prime Number."<<endl;
        return 0;
    }
}