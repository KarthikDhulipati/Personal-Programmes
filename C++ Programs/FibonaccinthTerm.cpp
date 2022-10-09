#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    if (n==2){
        return 1;
    }
    else{
        return (Fibonacci(n-1)+Fibonacci(n-2));
    }
}
int main()
{
    int num;
    cout<<"Enter the nth number of the series: ";
    cin>>num;
    cout<<num<<"th number = "<<Fibonacci(num);
    return 0;
}