#include<iostream>
using namespace std;
#define sqr(z) z*z;
int main()
{
    float a, b, c;
    cout<<"A Quadratic Equation is of the form: (a*(x^2))+(b*x)+c=0.\n";
    cout<<"Enter the values of a, b, and c: ";
    cin>>a>>b>>c;
    float D;
    D = sqr(b) - (4*a*c);
    if (D>0){
        cout<<"The roots are Real and Distinct.\n";
    }
    else if (D=0){
        cout<<"The roots are Real and Equal.\n";
    }
    else{
        cout<<"The roots are imaginary and unequal.\n";
    }
    return 0;
}