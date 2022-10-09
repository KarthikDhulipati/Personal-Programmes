#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number to find its Factorial: ";
    cin>>num;
    int i, fact=1;
    for (i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<"The Factorial of "<<num<<" is = "<<fact<<endl;
    return 0;
}