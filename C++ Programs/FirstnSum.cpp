#include<iostream>
using namespace std;
int SUM(int n)
{
    int i,sum=0;
    for (i=1;i<=n;i++){
            sum+=i;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"Enter the upper limit number: ";
    cin>>num;
    if (num>0){
        cout<<"The sum of first "<<num<<" numbers is: "<<SUM(num)<<endl;
    }
    else{
            cout<<"The number is not a natural number."<<endl;
        }
    return 0;
}