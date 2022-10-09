#include<iostream>
using namespace std;
int main()
{
    float a, b;
    cout<<"Enter the two numbers respectively: ";
    cin>>a>>b;
    char op;
    cout<<"Enter an operator (+,-,* or /): ";
    cin>>op;
    switch (op){
        case '+':
        cout<<"Sum = "<<a+b<<endl;
        break;
        case '-':
        cout<<"Difference = "<<a-b<<endl;
        break;
        case '*':
        cout<<"Product = "<<a*b<<endl;
        break;
        case '/':
        cout<<"Division Quotiont = "<<a/b<<endl;
        break;
        default:
        cout<<"Pick from the given operators.\n";
    }
}