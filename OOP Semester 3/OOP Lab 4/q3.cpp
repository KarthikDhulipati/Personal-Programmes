#include<iostream>
#include<cstdlib>
using namespace std;
class complex{
    int a, b, real, img;
    public:
    void get(){
        cout<<"Enter the Real and Imaginary Part of the Complex number: ";
        cin>>a>>b;
    }
    void display(){
        cout<<"The Complex number is: "<<endl<<a<<" + i("<<b<<")"<<endl;
    }
    void add(complex z1, complex z2){
        real=z1.a+z2.a;
        img=z1.b+z2.b;
        cout<<"The Sum of Complex numbers is: "<<endl<<real<<"+ i("<<img<<")"<<endl;
    }
};
int main()
{
    system("cls");
    complex z1, z2, z3;
    z1.get();
    z1.display();
    z2.get();
    z2.display();
    z3.add(z1, z2);
    return 0;
}