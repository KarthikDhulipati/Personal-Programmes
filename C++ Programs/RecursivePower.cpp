#include<iostream>
using namespace std;
int Power(int b, int e)
{
    if (b==0){
        return 0;
    }
    if (e==0){
        return 1;
    }
    if (e==1){
        return b;
    }
    else{
        return (Power(b, (e-1))*b);
    }
}
int main()
{
    int n, e;
    cout<<"Enter the number and its exponent power: ";
    cin>>n>>e;
    cout<<"n^e => "<<n<<"^"<<e<<" = "<<Power(n,e);
    return 0;
}