#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n==0){
        return 0;
    }
    if (n==1 || n==2){
        return 1;
    }
    else{
        return (Fibonacci(n-1)+Fibonacci(n-2));
    }
}
int main()
{
    int num;
    cout<<"Enter the nth number: ";
    cin>>num;
    cout<<"Fibonacci Series till "<<num<<"th number = ";
    for (int i=1;i<=num;i++){
        int t=Fibonacci(i);
        cout<<t<<" ";
    }
    cout<<"\n";
    return 0;
}