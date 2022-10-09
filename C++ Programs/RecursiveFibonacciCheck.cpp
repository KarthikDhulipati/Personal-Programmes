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
    int num, check=0;
    cout<<"Enter the number to check if it is in the Fibonacci Series: ";
    cin>>num;
    for (int i=0;i<=num;i++){
        check=Fibonacci(i);
        if (num==check){
            cout<<"\nThe number is present in the Fibonacci Series.\n"<<endl;
            break;
        }
    }
    if (!(check==num)){
        cout<<"\nThe number is not present in the Fibonacci Series.\n"<<endl;
    }
    return 0;
}