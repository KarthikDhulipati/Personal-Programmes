#include<iostream>
#include<cstdlib>
using namespace std;
class complex{
    int real, img;
    public:
    complex(){
        cout<<"Enter the real and Imaginary part of the number respectively: ";
        cin>>real>>img;
    }
    complex(complex &c1, complex &c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;
        cout<<"c3.real = "<<real<<endl<<"c3.img = "<<img<<endl;
    }
    ~complex(){
        cout<<"Destructor"<<endl;
    }
};
int main()
{
    system("cls");
    complex c1;
    complex c2;
    complex c3(c1, c2);
    return 0;
}