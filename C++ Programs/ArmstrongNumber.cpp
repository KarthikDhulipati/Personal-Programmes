#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0, originaln=n;
    while (n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(originaln==sum){
        cout<<"The number "<<originaln<<" is an Armstrong Nmber."<<endl;
    }
    else{
        cout<<"The number "<<originaln<<" is not an Armstrong Number."<<endl;
    }
    return 0;
}