#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, i;
    bool flag=0;
    cout<<"Enter a number: ";
    cin>>num;
    for (i=2;i<=sqrt(num);i++){
        if (num%i==0){
            cout<<"The number "<<num<<" is a Composite number.\n";
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"The number "<<num<<" is a Prime number.\n";
    }
    return 0;
}