#include<iostream>
using namespace std;
int Factorial(int n)
{
    if (n==1){
        return 1;
    }
    if (n==0){
        return 1;
    }
    else{
        return (n*Factorial(n-1));
    }
}
int main()
{
    int num;
    cout<<"Enter the number to find its Factorial: ";
    cin>>num;
    cout<<"The factorial of "<<num<<" is = "<<Factorial(num);
    return 0;
}