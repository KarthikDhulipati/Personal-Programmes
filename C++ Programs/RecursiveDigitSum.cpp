#include<iostream>
using namespace std;
int Digitsum(int n)
{
    if (n%10==0){
        return n;
    }
    else{
        return (n%10+Digitsum(n/10));
    }
}
int main()
{
    int num;
    cout<<"Enter a two-digit number: ";
    cin>>num;
    cout<<"Digit sum of "<<num<<" = "<<Digitsum(num);
    return 0;
}