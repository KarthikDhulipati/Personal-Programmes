#include<iostream>
#include<stdlib.h>
using namespace std;
namespace first{
    int find_factorial(int num1){
        long int fac1=1;
        for (int i=1;i<=num1;i++){
            fac1=fac1*i;
        }
        return fac1;
    }
}
namespace second{
    int find_factorial(int num2){
        long int fac2=1;
        for (int i=1;i<=num2;i++){
            fac2=fac2*i;
        }
        return fac2;
    }
}
int main()
{
    system("cls");
    int num1, num2;
    cout<<"Enter the two numbers respectively: "; 
    cin>>num1>>num2;
    cout<<"Factorial of "<<num1<<" = "<<first::find_factorial(num1)<<endl;
    cout<<"Factorial of "<<num2<<" = "<<second::find_factorial(num2)<<endl;
    return 0;
}