#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b, c;
    cout<<"Enter the values for the quadratic equation of the form: (a^2)x+(b)x+c: "<<endl;
    cin>>a>>b>>c;
    float D, x1, x2;
    D=((b*b)-(4*a*c));
    x1=((-b)+sqrt(D))/(2*a);
    x2=((-b)-sqrt(D))/(2*a);
    if (D>0)
    cout<<"The roots are Real and Distinct, i.e.: "<<endl;
    else if (D==0)
    cout<<"The roots are Real and Equal, i.e.: "<<endl;
    else if (D<0)
    cout<<"The roots are Imaginary and Unequal, i.e.: "<<endl;
    cout<<"Determinant (D) = "<<D<<"\nx1 = "<<x1<<"\nx2 = "<<x2<<endl;
    return 0;
}